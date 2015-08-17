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

[Exercise 13.5](ex13_05.h)

## Exercise 13.6:
> What is a copy-assignment operator? When is this operator used?
> what does the synthesized copy-assignment operator do?
> When is it synthesized?

- A copy-assignment operator is a function named **operator=**
- This operator is used when assignment is used.
- the synthesized copy-assignment operator assigns each *nonstatic* member of the right-hand object to the corresponding member of the left-hand object. This assignment operator returns a reference to its left-hand object.
- It is synthesized when the class doesn't have a defined copy-assignment operator



