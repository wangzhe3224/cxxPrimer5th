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


