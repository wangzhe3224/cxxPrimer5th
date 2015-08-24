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

~~~ cpp
int func() {
    static int i;
    return i++;
}
~~~

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


