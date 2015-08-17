# Chapter 13. Copy Control

## Exercise 13.1:
> What is a copy constructor? When is it used?

A copy constructor is a constructor which firsr parameter is a **reference** to the class type and any additional parameters have **default values**.

The fallowing conditions need copy constructor:
- Define variables using "=" (Assignment operator)
- Pass an object as an argument to a parameter of non-reference type
- Return an object from a function that has a non-reference type
- Brace initialize the elements in an array or members of an aggregate class
- Some class types also use copy initialization for the object they allocate

## Exercise 13.2:
>Explain why the following declaration is illegal:
```cpp
Sales_data::Sales_data(Sales_data rhs);
```

This is a copy constructor and the parameter of copy constructor must by a refrence.

## Exercise 13.4:
> Assuming Point is a class type with a public copy constructor, identify each use of the copy constructor in this program fragment:
```cpp
Point globla;
Point foo_bar(Point arg)
{
	Point local  = arg; // (1)
	Point *heap = new Point(global); // (2)
	*heap = local; // (3)
	Point pa[4]  = {local, *heap}; // (4)(5)
	return *heap; // (6)
}
```

## [Exercise 13.5](ex13_05.h)

## Exercise 13.6:
> What is a copy-assignment operator? When is this operator used?
> what does the synthesized copy-assignment operator do?
> When is it synthesized?

- A copy-assignment operator is a function named **operator=**
- This operator is used when assignment is used.
- the synthesized copy-assignment operator assigns each *nonstatic* member of the right-hand object to the corresponding member of the left-hand object. This assignment operator returns a reference to its left-hand object.
- It is synthesized when the class doesn't have a defined copy-assignment operator


## Exercise 13.7
> What happens when we assign one StrBlob to another? What about StrBlobPtrs?

Shallow copy happens.

## [Exercise 13.8](ex13_08.h)

## Exercise 13.9:
> What is a destructor?
> What does a synthesized destructor do?
> When is a destructor synthesized?

- A constructor does whatever work is needed to free the resources used by objects and destroy the *nonstatic* data members of the object. It takes no parameter and cannot be overloaded. It has no return type.
- A synthesized destructor has an empty function body.
- When no destructor is defined by users.

## Exercise 13.10:
> What happens when a StrBlob object is destroyed? What about a StrBlobPtr?

When a `StrBlob` object destroyed, the `use_count` of the dynamic object will decrement. It will be freed if no `shared_ptr` to that dynamic object.

When a `StrBlobPter` object is destroyed the object dynamically allocated will not be freed.

## [Exercise 13.11](ex13_11.h)

## Exercisr 13.12:
> How many destructor calls occur in the following code fragment?
```cpp
bool fcn(const Sales_data *trans, Sales_data accum)
{
	Sales_data item1(*trans), item2(accum);
		return item1.isbn() != item2.isbn();
}
```

- 3 times. `items1`, `items2`, `accum`.
- Temporary objects are destroyed at the end of the full expression when the temporary was created. The copy-constructor is called when accum is called by the function `fcn`; it is also called when `Sales_data item1(*trans)`.

## [Exercise 13.13](ex13_13.h)

## Exercise 13.14:
> Assume that numbered is a class with a default constructor that generates a unique serial number for each object, which is stored in a data member named mysn. Assuming numbered uses the synthesized copy-control members and given the following function:
```cpp
void f(numbered s) {cout << s.mysn << endl;}
```
> What output does the following code produce:
```cpp
numbered a, b = a, c = b;
f(a); f(b); f(c);
```

Three identical numbers.

## Exercise 13.15:
> Assume numbered has a copy constructor that generates a new serial number. Does that change the output of the calls in the previous exercise? If so, why? What output gets generated?

Yes. Because defined copy constructor will be used instead of the synthesized constructor.

## Exerise 13.16:
> What if the parameter in f were const numbered&? Does that change the output? If so, why? What output gets generated?

Yes. in `b=a,` and `c = b`, copy constructor still invokes.

## Exercise 13.17:
> Write versions of numbered and f corresponding to the previous three exercises and check whether you correctly predicted the output.

[13.13](ex13_17_1.cpp), [13.14](ex13_17_2.cpp), [13.15](ex13_17_3.cpp)

## [Exercise 13.18](ex13_18.cpp)

## Exercise 13.19:
> Does your Employee class need to define its own versions of the copy-control members? If so, why? If not, why not? Implement whatever copy-control members you think Employee needs.

Yes. If there is no copy constructor, some object made by assignment will not update id...  The copy-constructor shows in [ex13_18.cpp](ex13_18.cpp).

Once a class needs destructor, it almost needs a copy constructor and a copy-assingment operator.

## Exercise 13.20:
> Explain what happens when we copy, assign, or destroy objects of our TextQuery and QueryResult classes from § 12.3 (p. 484).

The member (smart pointer and container) will be copied.

## Exercise 13.21:
> Do you think the TextQuery and QueryResult classes need to define their own versions of the copy-control members? If so, why? If not, why not? Implement whichever copy-control operations you think these classes require.

NO.

## [Exercise 13.22](ex13_22.cpp)

## Exercise 13.23:
> Compare the copy-control members that you wrote for the solutions to the previous section’s exercises to the code presented here. Be sure you understand the differences, if any, between your code and ours.

...

## Exercise 13.24:
> What would happen if the version of HasPtr in this section didn’t define a destructor? What if HasPtr didn’t define the copy constructor?

Memory leak.

The string s will be pointed by two pointer!

## Exercise 13.25:
> Assume we want to define a version of StrBlob that acts like a value. Also assume that we want to continue to use a shared_ptr so that our StrBlobPtr class can still use a weak_ptr to the vector. Your revised class will need a copy constructor and copy-assignment operator but will not need a destructor. Explain what the copy constructor and copy- assignment operators must do. Explain why the class does not need a destructor.


## Exercise 13.26 [.h](ex13_26.h) | [.cpp](ex13_26.cpp)

