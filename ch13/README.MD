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
Explain why the following declaration is illegal:
'''cpp
Sales_data::Sales_data(Sales_data rhs);
''

