# Chapter 06 Functions

## Exercise 6.1:
> What's the difference between *parameter* and *argument*?

- *Arguments* are the initializers for a function’s *parameter*.

- *Parameters* is local variable declared inside the function parameter list.

## Exercise 6.2:
> Indicate which of the following functions are in error and why. Suggest how you might correct the problems.

(a) return type didn't meet the function return type.

(b) The return type is missing.

(c) The parameters have the same name.

(d) Missing curly braces.

## Exercise 6.3:
> Write your own type of `fact`

[Code](ex06_03.cpp)

## [Exercise 6.4](ex06_04.cpp)

## [Exercise 6.5](ex06_05.cpp)

## Exercise 6.6
> Explain the differences between a parameter, a local variable, and a local static variable. Give an example of a function in which each might be useful.

**Parameter** is *local viriable*.It is automatic object. Storage for the parameters is allocated when the function begins. Parameters are defined in the scope of the function body. Hence they are destroyed when the function terminates.

**local variable** : Variables defined inside a block.

**local static variable**: local static variable（object） is initialized before the first time execution passes through the object’s definition.Local statics are not destroyed when a function ends; they are destroyed when the program terminates.

## Exercise 6.7
> Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.

```cpp
int func() {
    static int i;
    return i++;
}
```

## [Exercise 6.8](ex06_08.h)

## Exercise 6.9
[fact.cc](fact.cc) | [factMain.cc](factMain.cc)

## [Exercise 6.10](ex06_10.cc)

## [Exercise 6.11](ex06_11.cpp)

## Exercise 6.12

[Code](ex06_10.cc)

## Exercise 6.13
> Assuming T is the name of a type, explain the difference between a function declared as void f(T) and void f(T&).

`f(T)` is passing by value, the function will do nothing change the pass object;

`f(T&)` is passing by reference, the function could change the passing object;

## Exercise 6.14

- Use reference: `swap()` function
- Use nonreference: `printVec(vector<int>::iterator beg, vector<int>::iterator end)`

## Exercise 6.15
- `s` should not be changed while `count` is a counter which should be changed.

## Exercise 6.16

- Use reference-to const when possible.

`bool is_empty(string &s)` cannot be used in following conditions:

- is_empty("wangzhe");   /// plain reference cannot be initialized by literals.

- can not be used in other functions which use a reference-to const parameter.

- can not used a const parameter.

## [Exercise 6.17](ex06_17.cpp)

## [Exercise 6.18](ex06_18.h)

## Exercise 6.19
> Given the following declarations, determine which calls are legal and which are illegal. For those that are illegal, explain why.

(a) Error. too many argiments.

(b) Ok.

(c) Ok.

(d) Ok.

## Exercise 6.20

When we dont want to change the passing arguments.

## [Exercise 6.21](ex06_21.cpp)

## [Exercise 6.22](ex06_22.cpp)

## [Exercise 6.23](ex06_23.cpp)

## Exercise 6.24

~~~ cpp
void print(const int ia[10])
{
for (size_t i = 0; i != 10; ++i)
cout << ia[i] << endl;
}
~~~

The problem is `print(const int ia[10])`. This means `print(const int *ia)` to c++. And even an pointer to int can be used as an argument as the function.

Correct:

`print(const int (&ai)[10])` in which ai is a reference to an array with 10 elements.

> Arrays have two special properties that affect how we define and use functions that operate on arrays: We cannot copy an array, and when we use an array it is (usually) converted to a pointer.

## [Exercise 6.25 && 6.26](ex06_25.cpp)

## Exercise 6.28

> const std::string&

## Exercise 6.29

Should ues `const reference`. Because `initializer_list` always contains const value.

## Exercise 6.30

Error: return-statement with no value, in function returning ‘bool’ [-fpermissive]

## Exercise 6.31:
> When is it valid to return a reference? A reference to const?

First to find what pre-existing object the reference refers to.

## Exercise 6.32

Legal! Assigns 0-9 to the array.

## [Exercise 6.33](ex06_33.cpp)

## Exercise 6.34

If val is positive, the result is as same as if val > 1.

If val is negetice, the recurve never stops.

## Exercise 6.35

val-- will lead the function using the same value all the time.

> i++ will increment the value of i, but return the original value that i held before being incremented.

## Exercise 6.36 and 6.37
> Write the declaration for a function that returns a reference to an array of ten strings, without using either a trailing return, decltype, or a type alias.

~~~cpp
std::string (&ref())[10];
auto ref() -> std::string(&)[10]; // trailing return type
decltype(odd) &ref(); // using decltype
~~~

## Exercise 6.38

~~~cpp
auto arrPtr(int i) -> int (&) [5] {
    return i%2 ? even : odd; 
}
~~~

## Exercisr 6.39

(a) Illegal. function call ignores the top level const.

(b) Illegal. Only the return type is different.

(c) Legal.

## Exercise 6.40

(a) legal

(b) Error. Should put the default paramter at end

## Exercisr 6.41

(a) Illegal. Lack of parameter  
(b) legal  
(c) illega

## Exercise 6.42

## Exercise 6.43

Both.

## [Exercisr 6.44](ex06_44.cpp)

## Exercise 6.45

Only short function is suitable to make `inline`.

## Exercise 6.46

A constexpr function is defined like any other function but must meet certain restrictions: The return type and the type of each parameter in a must be a literal type.

As a result, NO.

## Exercise 6.49
> What is a `candidate function?`
What is a `viable function`?

`candidate function` : a function with the same name as the called function and for which a declaration is visible at the point of the call.     
`viable function`: a function must have the same number of parameters as there are arguments in the call, and the type of each argument must match—or be convertible to—the type of its corresponding parameter.     

## Exercise 6.50

(a) ambiguous

(b) match `void f(int)`

(c) match `void f(int, int)`

(d) match `void f(double, doble`

## [Exercise 6.51](ex06_51.cpp)

## Exercise 6.52

(a) char promoted to int

(b) double converts to int

## Exercise 6.53

(a) legal, low level const makes difference in function call

(b) ditto

(c) illegal. top level const mekes no different in function call.

## [Exercise 6.54 - 6.56](ex06_54.cpp)


