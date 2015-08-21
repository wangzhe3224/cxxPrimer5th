# Chapter 02 Varibles and Basic Types

## Exercise 2.1:
> What are the differences between int, long, long long,and short? Between an unsigned and a signed type? Between a float and a double?

C++ guarantees `short` and `int` is at least 16 bits, `long` at least 32 bits, `long long` at least 64 bits.

`signed`, which is default, can represents negative, positive and zero number, while `unsigned` can only represent numbers larger (or equal to) than 0.

Typically, `floats` are represented in one word (32 bits), `doubles` in two words (64 bits), and `long doubles` in either three or four words (96 or 128 bits).

#### Advice:
1. if you need integer, use *int*; if you need very large integer, use *long long*.

2. if you need floating point calculation, use *double* instead of float.

## Exercise 2.2:
> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

Use `double`.

## Exercise 2.3:
- Output:
32
4294967264
32
-32
0
0

## Exercuse 2.4:
> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
- (a) 'a', L'a', "a", L"a"
- (b) 10, 10u, 10L, 10uL, 012, 0xC
- (c) 3.14, 3.14f, 3.14L
- (d) 10, 10u, 10., 10e-2

(a) character literal; long character literal; string literal; long string literal;

(b) decimal; unsigned decimal; long decimal; unsigned long decimal; octal; hexadecimal;

(c) double; float; long double;

(d) decimal; unsigned decemal; double; double;

## Exercise 2.5:
> What, if any, are the differences between the following definitions:

```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

`9` and `7` are integer decimal;

`09` is wrong. otcal can not have digit *9*, `07` is a integer otcal.

##Exercise 2.7
> What values do these literals represent? What type does each
have?
- (a) "Who goes with F\145rgus?\012"
- (b) 3.14e1L
- (c) 1024f
- (d) 3.14L

(a): Who goes with Fergus?(new line)\n  : "string"

(b): 31.4 :  "long double"

(c): 1024 : "float"

(d): 3.14 : "long double"

##Exercise 2.8
> Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

```cpp
cout << "2M\n";
cout << "2\tM\n";
```

## Exercise 2.9:
> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.

- (a) std::cin >> int input_value;

Error: expected primary-expression before ‘int’

```cpp
int input_value;
std::cin >> input_value;
```

- (b) int i = { 3.14 };

Warning:*in g++ -std=c++11 mode* narrowing conversion.

NO waring at all *in g++ mode*.

- (c) double salary = wage = 9999.99;

Error: ‘wage’ was not declared in this scope

- (d) int i = 3.14;

No warning. but i is trancated to 3.

## Exercise 2.10:
> What are the initial values, if any, of each of the following variables?
```cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```

- `global_str`: empty string

- `global_int`: integer *0*

- `local_int`: *undefined value* (Because c++ rules that: uninitialized objects of the build-in type which defined in a local scope, like a function body, have *undefined value*)

- `local_str`: empty string. string is not a build-in type.

## Exercise 2.11:
> Explain whether each of the following is a declaration or a definition:

- (a) extern int ix = 1024; // defination

- (b) int iy; // defination

- (c) extern int iz; // declaration

## Exercise 2.12:
> Which, if any, of the following names are invalid?

- (a) int double = 3.14; // invalid

- (b) int _; // valid

- (c) int catch-22; // invalid

- (d) int 1_or_2 = 1; // invalid

- (e) double Double = 3.14; // valid

## Exercise 2.13:
>What is the value of j in the following program?
```cpp
int i = 42;
int main(){
    int i = 100;
    int j = i;
}
```

100

## Exercise 2.14:
> Is the following program legal? If so, what values are printed?
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
     sum += i;
std::cout << i << " " << sum << std::endl;
```

Output: 100, 45;

## Exercise 2.15:
> Which of the following definitions, if any, are invalid? Why?

```cpp
(a) int ival = 1.01; // valid
(b) int &rval1 = 1.01; // invalid, initializer must be an object.
(c) int &rval2 = ival; // valid
(d) int &rval3; // invalid, must be initialized.
```

# Exercise 2.16:
> Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
(a) r2 = 3.14159; // valid
(b) r2 = r1; // valid. automatic convertion
(c) i = r2; // valid. trancation happens
(d) r1 = d; // valid. trancation happens
```

## Exercise 2.17:
> What does the following code print?

```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

*Output*: 10 10

## Exercise 2.18:
>Write code to change the value of a pointer. Write code to change the value to which the pointer points.

```cpp
int i = 0, j = 1;
int *p = &i;
int *q = &j
*p = j; // change value of i;
q = p; // change value of pointer p
```

## Exercise 2.19:
> Explain the key differences between pointers and references.

- *reference* is **not** an object, it just another name of an object, while *pointer* is an object, which points to another object.

- We can not rebind a reference with its object.

- In c++, we can only use reference to handle operator overloading.

- A reference must be bound with an object, while pointer may have a null calue.

Reference:

-[References vs. Pointers](http://www.embedded.com/electronics-blogs/programming-pointers/4023307/References-vs-Pointers)

## Exercise 2.20:
> What does the following program do?

```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1; // *p1 = (*p1) * (*p1)
```

the value of i is 42*42

## Exercise 2.21:
> Explain each of the following definitions. Indicate whether any are illegal and, if so, why.

```cpp
int i = 0;
(a) double *dp = &i; // invalid, type does not match
(b) int *ip = i; // invalid, 
(c) int *p = &i; // valid
```

##Exercise 2.22
> Assuming p is a pointer to int, explain the following code:
```cpp
if (p) // ...
if (*p) // ...
```

if (p) // whether p is nullptr?

if (*p) // whether the value pointed by p is zero?

##Exercise 2.23
>Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

No.

##Exercise 2.24
>Why is the initialization of p legal but that of lp illegal?

```cpp
int i = 42;
void *p = &i;
long *lp = &i;
```

`void*` is a special pointer that may point to any type, hence the second line is legal.
C++ forbids implicit conversions like `long *lp = &i;`, thus such code is illegal.

##Exercise 2.25
> Determine the types and values of each of the following variables.
- (a) int* ip, i, &r = i;
- (b) int i, *ip = 0;
- (c) int* ip, ip2;

```
(a): ip is a pointer to int, i is an int, r is a reference to int i.
(b): ip is a valid, null pointer, and i is an int.
(c): ip is a pointer to int, and ip2 is an int.
```

##Exercise 2.26
> Which of the following are legal? For those that are illegal, explain why.

```cpp
const int buf;      // illegal, buf is uninitialized const.
int cnt = 0;        // legal.
const int sz = cnt; // legal.
++cnt; ++sz;        // illegal, attempt to write to const object(sz).
```

##Exercise 2.27
> Which of the following initializations are legal? Explain why.

```cpp
int i = -1, &r = 0;         // illegal, invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
int *const p2 = &i2;        // legal.
const int i = -1, &r = 0;   // legal.
const int *const p3 = &i2;  // legal.
const int *p1 = &i2;        // legal
const int &const r2;        // illegal, r2 is a reference that cannot be const.
const int i2 = i, &r = i;   // legal.
```

- reference-to-const type can be bound to a rvalue.

- reference cannot be const, but `const int &i = a` is valid.

##Exercise 2.28
> Explain the following definitions. Identify any that are illegal.

```cpp
int i, *const cp;       // illegal, cp must initialize.
int *p1, *const p2;     // illegal, p2 must initialize.
const int ic, &r = ic;  // illegal, ic must initialize.
const int *const p3;    // illegal, p3 must initialize.
const int *p;           // legal.
```

- const type must be initialized and cannot be modified..

##Exercise 2.29
> Uing the variables in the previous exercise, which of the following assignments are legal? Explain why.

```cpp
i = ic;     // legal.
p1 = p3;    // illegal. p3 is a pointer to const int.
p1 = &ic;   // illegal. ic is a const int.
p3 = &ic;   // illegal. p3 is a const pointer.
p2 = p1;    // illegal. p2 is a const pointer.
ic = *p3;   // illegal. ic is a const int.
```

##Exercise 2.30
> For each of the following declarations indicate whether the object being declared has top-level or low-level const.

```cpp
const int v2 = 0; int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```

`v2`: top-level const.
`p2`: low-level const.
`p3`: both top- and low-level const.
`r2`: low-level const.

##Exercise 2.31
>Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.

```cpp
r1 = v2; // legal, top-level const in v2 is ignored.
p1 = p2; // illegal, p2 has a low-level const but p1 doesn't.
p2 = p1; // legal, we can convert int* to const int*.
p1 = p3; // illegal, p3 has a low-level const but p1 doesn't.
p2 = p3; // legal, p2 has the same low-level const qualification as p3.
```

- When we copy an object, top-level consts are ignored.

##Exercise 2.32
>Is the following code legal or not? If not, how might you make it legal?

    int null = 0, *p = null;

illegal.
```cpp
int null = 0, *p = nullptr;
```

##Exercise 2.33
>Using the variable definitions from this section, determine what happens in each of these assignments:

```cpp
a=42; // set 42 to int a.
b=42; // set 42 to int b.
c=42; // set 42 to int c.
d=42; // error, d is an int *. correct: *d = 42;
e=42; // error, e is an const int *. correct: e = &c;
g=42; // error, g is a const int& that is bound to ci. cannot assign.
```

##Exercise 2.34
>Write a program containing the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know￼￼what led you to the wrong conclusion.

[Exercise 2.34](ex02_34.cpp)

##Exercise 2.35
>Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.

```cpp
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i; const auto j2 = i, &k2 = i;
```

`i` is const int type (top-level const)

`j` is int type;

`k` is const int type;

`p` is const point-to int type(const int*);

`j2` is const int type;

`k2` is const reference-to int type (const int&)

##Exercise 2.36
>In the following code, determine the type of each variable and the value each variable has when the code finishes:

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```

`c` is int type

`d` is int& type

all the value of varibles are `4`

##Exercise 2.37
>Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```

`c` is int type

`d` is int& type

##Exercise 2.38
>Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce differing types.

### decltype
- is a keyword to query the `type` of an `expression`.

- decltype also considers whether the expression is rvalue or lvalue.
> e.g.:
```cpp
int c;
decltype((c)) d = c; // d is int& type. Because (c) is an lvalue.
```

[reference](http://stackoverflow.com/questions/6869888/the-relationship-between-auto-and-decltype)

> but if give a rvalue to delytype will leads to a type (not a reference)

### auto
- is used to define type of variables for which there is a initializer.

```cpp
int global = 12;
int &foo() {
	return global;
}
int main() {
	// different case:
	decltype(foo()) a = foo(); // a is int& type
	auto b = foo(); // a is int type
	// same case:
	int i = 0;
	int &j = i;
	auto c = i; // c is int type
	decltype(j) d = i; // d is int type
}
```

##Exercise 2.39
>Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for
future reference.

```cpp
struct Foo { /* empty  */ } // Note: no semicolon
int main()
{
    return 0;
}
```

Error message: [Error] expected ';' after struct definition

##Exercise 2.40
>Write your own version of the Sales_data class.

```cpp
struct Sale_data
{
    std::string bookNo;
    std::string bookName;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double price = 0.0;
    //...
}
```


