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

