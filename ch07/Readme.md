# Chpater 07 Classes

## [Exercise 7.1](ex07_01.cpp)

## [Exercise 7.2](ex07_02.h)

## [Exercise 7.3](ex07_03.cpp)

## [Exercise 7.4](ex07_04.h)

## [Exercise 7.5](ex07_04.h)

## [Exercise 7.6](ex07_06.h)

## [Exercise 7.7](ex07_07.cpp)

## Exercise 7.8

Because `read()` function need to change the passing argument, while `print()` function dosen't.

## [Exercisr 7.9](ex07_09.h)

## Exercise 7.10

It will read both data1 and data2.

## Exercise 7.11|[.cpp](ex07_11.cpp)|[.h](ex07_11.h)

## [Exercise 7.12](ex07_12.h)

## [Exercisr 7.13](ex07_13.cpp)

## Exercise 7.14

`Salse_data() : units_sold(0), revenue(0) {}`

## [Exercise 7.15](ex07_15.h)

## Exercisr 7.16

It dosen't matter where to put a access specifier. Most of the member functions should be public so that users can use these function to access private members. Most of the class members (data) should be private.

## Exercisr 7.17

The only difference between using class and using struct to define a class is the default access level.

If we define a class in which all the members are public, we use struct;
If we want some thing be pricate, we use class.

## Exercise 7.18

Encapsulation:  
Data encapsulation, sometimes referred to as data hiding, is the mechanism whereby the implementation details of a class are kept hidden from the user.[Ref.](http://www.cs.mun.ca/~donald/bsc/node13.html) 

Advantage:
- User code cannot inadvertently corrupt the state of an encapsulated object.
- The implementation of an encapsulated class can change over time without requiring changes in user-level code.

## Exercise 7.19

All the member functions should be `public`, and the member `_name` and `_address` should be private.

data should not expose to the user directly.

## Exercise 7.20

friend is a mechanism by which a class grants access to its nonpublic members.

## [Exercise 7.21](ex07_21.h)

## [Exercise 7.22](ex07_22.h)

## [Exercise 7.23 - 7.24](ex07_23.h)

## Exercise 7.25:
>Can Screen safely rely on the default versions of copy and assignment? If so, why? If not, why not?

For the case of class `Screen` is ok to use default construtor. Because `string` class will handle the dynamic problem.

## [Exercise 7.26](ex07_26.h)

## Exercise 7.27 [.cpp](ex07_27.cpp) | [.h](ex07_27.h)

## Exercise 7.28

The second line of display will be all `#`

## Exercise 7.29

Yes.

## Exercise 7.30
>
It is legal but redundant to refer to members through the **this** pointer. Discuss the pros and cons of explicitly using the this pointer to access members.

Pros:  
- If a inherited class want to access a non-static member of the base class, you should use **this** pointer.[ref](http://stackoverflow.com/questions/8138466/c-proper-usage-this-pointer)  
- It can help with naming confusion sometimes.  

Cons:  
- more code...maybe..__

## Exercise 7.33
>
What would happen if we gave Screen a size member defined as follows? Fix any problems you identify.  
~~~cpp
pos Screen::size() const
{
	return height * width;
}
~~~

`pos` is member type. It should be declared using scope operator:  
~~~cpp
Screen::pos
Screen::size() const
~~~

## Exercise 7.34

Error:type `pos` is not declared.

## Exercise 7.35
> find errors:  
~~~cpp
typedef string Type;
Type initVal();
class Exercise {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};
Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;}
~~~  
`initVal`: string  
`setVal()`: double setVal(double)  
`Exercise::initValu`: `double exercise::initval()`  
`Type Exercise::setVal`: `string Exercisr::setVal(double)`

Fixs:  
`Exercise::Type Exercisr::setVal(Type parm)` and `Exercise::initVal()` should be **defined** before `setVal()` can use it in its function body.

## Exercise 7.36  
`rem` will be initilized before `base`.

## Exercise 7.37  
~~~cpp
Sales_data first_item(cin);   // use Sales_data(std::istream &is) ; its value are up to your input.

int main() {
  Sales_data next;  // use Sales_data(std::string s = ""); bookNo = "", cnt = 0, revenue = 0.0
  Sales_data last("9-999-99999-9"); // use Sales_data(std::string s = ""); bookNo = "9-999-99999-9", cnt = 0, revenue = 0.0
  }
  ~~~

## Exercise 7.38  
`Sales_data::Sales_data(std::istream &is = std::cin) { read(is, *this); }`

## Exercise 7.39:
>Would it be legal for both the constructor that takes a string and the one that takes an istream& to have default arguments? If not, why not?

Illegal.. function overload is ambiguous.

## Exercise 7.40 [.h](ex07_40.h) | [.cpp](ex07_40.cpp)

## [Exercise 7.41][ex04_42.h]

## [Exercise 7.42](ex07_42.h)

## Exercise 7.43

~~~cpp
C():memberInC(0);
~~~

## Exercise 7.44

Illegal. Because there is no default constructor for the class.

## Exercise 7.45

It is OK. Because C has its own default constructor

## Exrecise 7.46

1. Untrue. The compiler will generate a *synthesized default constructor* if there is no constructor in the class.
2. Untrue. Default constructor is used for **zero** initializer situations. A constructor whose parameters all have default value is also a default constructor.
3. Untrue.
4. ???? True.

## Exercise 7.47
>
Explain whether the Sales_data constructor that takes string should be explicit. What are the benefits of making the constructor explicit? What are the drawbacks?

It is ok to be implicit in this case.

## Exercise 7.48

No Error occurs in both case.

## exercise 7.49
>
What will happen when call c.combine(s), where s is a string type.

(a) Sales_data &combine(Sales_data); //      
(b) Sales_data &combine(Sales_data&);  
(c) Sales_data &combine(const Sales_data&) const;  


