# Chapter 04 Expressions

## Exercise 4.1:
>What is the value returned by 5 + 10 * 20/2?

105

## Exercise 4.2:
> Using Table 4.12 (p. 166), parenthesize the following expressions to indicate the order in which the operands are grouped:

(a) `*vec.begin();` // * (vec.begin())

(b) `*vec.begin() + 1;` // (* (vec.begin())) + 1

##Exercise 4.3
>Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

NO. Write clear code is better than tricky code.

##Exercise 4.4
>Parenthesize the following expression to show how it is evaluated.Test your answer by compiling the expression (without parentheses) and printing its result.

```cpp
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
// parenthesize
((12/3)*4) + (5*15) + ((24%4)/2)
// 16 + 75 + 0 = 91
// print: 91
```

##Exercise 4.5
>Determine the result of the following expressions.

```cpp
-30 * 3 + 21 / 5  // -90+4 = -86
-30 + 3 * 21 / 5  // -30+63/5 = -30+12 = -18
30 / 3 * 21 % 5   // 10*21%5 = 210%5 = 0
-30 / 3 * 21 % 4  // -10*21%4 = -210%4 = -2
```

##Exercise 4.6
>Write an expression to determine whether an int value is even or odd.

```cpp
 i & 0x1 
 ```

##Exercise 4.7
>What does overflow mean? Show three expressions that will overflow.

```cpp
short svalue = 32767; ++svalue; // -32768
unsigned uivalue = 0; --uivalue;  // 4294967295
unsigned short usvalue = 65535; ++usvalue;  // 0
```

##Exercise 4.8
>Explain when operands are evaluated in the logical `AND`, logical `OR`, and equality operators.

from the book:
> The logical `AND` and `OR` operators always evaluate their left operand before the right. Moreover, the right operand is evaluated if and only if the left operand does not determine the result. This strategy is known as **short-circuit evaluation**.

- logical `AND` : the second operand is evaluated if and only if the left side is `true`.
- logical `OR`  : the second operand is evaluated if and only if the left side is `false`
- equality operators `==` : undefined.

##Exercise 4.9
>Explain the behavior of the condition in the following if:
```cpp
const char *cp = "Hello World";
if (cp && *cp)
```

cp is a pointer to `const char *`, and it's not a nullptr. true.

`*cp` is a const char: 'H', and it is explicit a nonzero value. true.


##Exercise 4.10
>Write the condition for a while loop that would read ints from
the standard input and stop when the value read is equal to 42.

```cpp
int i = 0;
while(cin >> i && i != 42)
```

##Exercise 4.11
>Write an expression that tests four values, a, b, c, and d, and ensures that a is greater than b, which is greater than c, which is greater than d.

```cpp
a>b && b>c && c>d
```

##Exercise 4.12
>Assuming `i`, `j`, and `k` are all ints, explain what `i != j < k` means.

`i != j < k` is equivalent to `i != (j < k)`.

## Exercise 4.13:
> what are the values of i and d after each assignment?

```cpp
int i; double d;
(a) d = i = 3.5; // 3   3.0
(b) i = d = 3.5; // 3.5 3
```

## Exercise 4.14:
> Explain what happens in each of the if tests:

```cpp
if (42 = i); // Compile error
if (i = 42); // true
```

## Exercise 4.15:
> The following assignment is illegal. Why? How would you correct it?

```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;
// Correct
*pi = 0;
```

## Exercise 4.16:
> Rewrite the xpression as you think they should be:

```cpp
(a) if (p = getPtr() != 0)
(b) if (i = 1024)
// correction
(a) if ((p = getPtr()) != 0)
(b) if (i == 1024)
```

## Exercise 4.17:
> Explain the difference between prefix and postfix increment.

`prefix` form increment (decrement) the operant and yield the changed object. `prefix` is advised if no special requirement needed.

`postfix` form increment (decrement) the operant but yield a copy of *original*, *unchanged* value.

## Exercise 4.18:

We’d skip the first element. Worse, if the sequence had no negative values, we would attempt to dereference one too many elements.

## Exercise 4.19:
> Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?p

(a) ptr != 0 && *ptr++
> check left operand of `&&` first, if ptr is not nullptr, check the value of *ptr.

(b) ival++ && ival
> check ival and then check ival+1.

(c) vec[ival++] <= vec[ival]
> incorrect. Undifiend behaviour. vec[ival] <= vec[ival +1]

## Exercise 4.20:
> Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren’t legal are in error.

(a) *iter++;  // return vec[iter]'s value, iter points to the next element (a string in this case)
(b) (*iter)++; // illegal. strings don't support `++` operator
(c) *iter.empty() // illegal. (*iter).empty()
(d) iter->empty(); // check if the string denoted by iter is empty.
(e) ++*iter; // illegal. *++iter
(f) iter++->empty(); // return whether element denoted by inter is empty, move iter to the next element.

## [Exercise 4.21](ex04_21.cpp)

## [Exercise 4.22](ex04_22.cpp)

## Exercise 4.23:
> The following expression fails to compile due to operator precedence.

```cpp
string s = "word";
string pl = s + s[s.size() - 1] == 's' ? "" : "s" ;
```

fixed:

```cpp
string s = "word";
string pl = s + (s[s.size() - 1] == 's' ? "" : "s") ;
```

## Exercise 4.24:
> Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.

Original:

`finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";`

if it is left associative:

`finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass:";`

If the grade is greater than 90, the first part returns "high pass" which is *true*, so finaly, `finalgrade` = "fail".

## Exercise 4.28:
> print the size of built-in type:

```cpp
// void type
cout << "void: nullptr_t\t" << sizeof(std::nullptr_t) << " bytes" << endl << endl;

// boolean type
cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;

// charactor type
cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

// integers type
cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

// floating point type
cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;

// Fixed width integers
cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << endl;
cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << endl;
cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << endl;
cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << endl;
cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << endl;
cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << endl;
cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << endl;
cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << endl;
```

## Exercise 4.29:
> Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expected? If not, figure out why.

```cpp
int x[10];   int *p = x;
cout << sizeof(x)/sizeof(*x) << endl; // Output: 10;
cout << sizeof(p)/sizeof(*p) << endl; // Output: 2 ;
```

## Exercise 4.30:
> Using Table 4.12 (p. 166), parenthesize the following expressions to match the default evaluation:

```cpp
sizeof x+y; // (sizeof(x)) + y
sizeof p->mem[i]; // sizeof (p->mem[i])
sizeof a < b; // (sizeof(a)) < b
sizeof f(); //  returns the size of the return type of f().
```

## Exercise 4.31:
>The program in this section used the prefix increment and decrement operators. Explain why we used prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.

There no difference in this example if we use a postfix operator.

Use prefix increment is a good habit.

## Exercise 4.32:
> Explain the following loop.

```cpp
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr)
{ /* ...   */ }
```

To go through the array using ptr or ix..... Doesn't make any sense....

## Exercise 4.33:
> Using Table 4.12 (p. 166) explain what the following expression does:

```cpp
someValue ? ++x, ++y : --x, --y
```

`(somevalue ? ++x, ++y : --x) , --y`. Comma has the **lowest** precedence...


