# Chapter 05 Statements

## Exercise 5.1:
> what is a null statement? When might you use a null statement?

*null statement* is a statement containing only a semicolon.

The null statement may be used as a placeholder when a statement is expected.

## Exercise 5.2:
> What is a block? When might you use a block?

A block is a sequence of statements and declarations surrounded by a pair of curly braces. It is used when multiple statements are needed.

A block does *not* end with a *semicolon*!

## Exercise 5.3:

Diminish the readability.

## Exercise 5.4:
> Explain each of the following examples, and correct any problems you detect.

```cpp
(a) while (string::iterator iter != s.end()) {}
(b) while (bool status = find(word)) {}
if (!status) {/*........*/}
```

The varible declared in the `while ()` only visible inside the parathesises.

## [Exercise 5.5](ex05_04.cpp)

## Exercise 5.6

## Exercise 5.7:
> Correct the errors in each of the following code fragments:

(a)

```cpp
if (ival1 != ival2)
    ival1 = ival2; // missing the semicolon
else
    ival1 = ival2 = 0;
```

(b)

```cpp
if (ival < minval)
    minval = ival;
    occurs = 1; // missing the curly braces.
```

(c)

```cpp
if (int ival = get_value()) // should declare ival outside if()
    cout << "ival = " << ival << endl;
if (!ival)
    cout << "ival = 0\n";
```

(d)

```cpp
if (ival = 0)
    ival = get_value(); // should ues *==* instead of *=*
```

## Exercise 5.8:
> What is a “dangling else”? How are else clauses resolved in C++?

In C++, an else is always paired with the closest preceding unmatched if.

## [Exercise 5.9](ex05_09.cpp)

## [Exercise 5.10](ex05_10.cpp)

## [Exercise 5.11](ex05_11.cpp)

## [Exercise 5.12](ex05_12.cpp)

## Exercise 5.13:
> Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error.

(a)
```cpp
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a': aCnt++; // missing the `break;`
    case 'e': eCnt++;
    default: iouCnt++;
}
```

(b)
```cpp
unsigned index = some_value();
switch (index) {
case 1:
    int ix = get_value(); // 
    ivec[ ix ] = index;
    break;
   default:
       ix = ivec.size()-1; // ix is not in the scope...
       ivec[ ix ] = index;
}
```

(c)

```cpp
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10; // if digit is intented to be a switch case, it should be an `unsigned`
switch (digit) {
    case 1: case 3: case 5: case 7: case 9:
	    oddcnt++;
	    break;
	case 2: case 4: case 6: case 8: case 0:
    	evencnt++;
	    break;
    }
	```

(d)

```cpp
// Error: case label must be a constant expression
const unsigned ival=512, jval=1024, kval=4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
case ival:
bufsize = ival * sizeof(int);
break;
case jval:
bufsize = jval * sizeof(int);
break;
case kval:
bufsize = kval * sizeof(int);
break;
    }
```

## [Exercise 5.14](ex05_14.cpp)

## Exercise 5.15:
> Explain each of the following loops. Correct any problem you detect.

(a) error: ix is not in the scope

(b) Error: missing the first semicolon for the initial condition of for loop

(c) zx is not defined in the scope.

## Exercise 5.16:

The idiomatic use of `while`:

```cpp
int i;
while (cin >> i) {/*...*/}
```

The idiomatic use of `for`:

```cpp
for (int i = 0; i != size; ++i)
```

## Exercise 5.18:
> Explain each of the following loops.

(a) missing the curly beaces for the do loop;

(b) should not declare in the do-while condition scope.

(c) ival is not declared in this scope.

## [Exercise 5.19](ex05_19.cpp)

## [Exercise 5.20](ex05_20.cpp)

## [Exercise 5.21](ex05_21.cpp)

## Exercise 5.22

*Do not* use `goto`.

## [Exercise 5.23](ex05_23.cpp)

## [Exercise 5.24](ex05_23.cpp)

## [Exercise 5.25](ex05_25.cpp)
