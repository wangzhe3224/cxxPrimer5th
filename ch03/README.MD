# Answer to Chapter 03 - Strings, Vectors and Strings

## Exercise 3.1:
> rewrite...

## Exercise 3.2:
> Write a program to read the standard input a line at a time. Modify your program to read a word at a time.

[Exercise 3.2 code](ex03_01.cpp)

## Exercise 3.3:
> Explain how whitespace characters are handled in the string input operator and in the getline function.

The input operator `>>` will divide the string by whitespace, while the function `getline(cin,xxx)` will receive all the string inputed including the whitespace.

## Exercise 3.4:
> Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer.

### [Exercise 3.4 code](ex03_04.cpp)

## Exercise 3.5:
> Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate adjacent input strings by a space.

### [Exercise 3.5 code](ex03_05.cpp)

## Exercise 3.6:
> Use a range for to change all the characters in a string to X.

```c++
#include <string>
using namespace std;
int main() {
	string str = "WangZhe";
	for (auto &c : str)
		c = 'X';
	return 0;
}
```
- [Code](ex03_06.cpp)

## Exercise 3.7:
> What would happen if you define the loop control variable in the previous exercise as type char? Predict the results and then change your program to use a char to see if you were right.

If the type in for loop is `char c`, it will not change the `str`. It should be a reference, if you want to change the string.

## Exercise 3.8:
> Rewrite the program in the first exercise, first using a while and again using a traditional for loop. Which of the three approaches do you prefer and why?

[While Loop](ex03_08_1.cpp)

[Traditonal for loop](ex03_08_2.cpp)

I think the code in [Ex3.6](ex03-06.cpp) is better, because it is more concise.

## Exercise 3.9:
> What does the following program do? Is it valid? If not, why not?
```cpp
string s;
cout << s[0] << endl;
```

`s` is empty, but the program can run without error. But it is an **undefined behaviour**.

## Exercise 3.10:
>Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

[Exercise 3.10](ex03_10.cpp)

## Exercise 3.11:
> Is the following range for legal? If so, what is the type of c?
```cpp
const string s = "Keep out!";
for (auto &c : s) { /* ...  */ }
```

The type of c is `const char&`.

## Exercise 3.12:
> Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

1. vector<vector<int>> ivec;         **legal**
2. vector<string> svec = ivec;       **illegal**
3. vector<string> svec(10, "null");  **legal** string with 10 "null"s

## Exercise 3.13:
> How many elements are there in each of the following vectors? What are the values of the elements?

- (a) vector<int> v1; //  *0 with value 0*

- (b) vector<int> v2(10);  // *10 with value 0*

- (c) vector<int> v3(10, 42); // *10 elements with value 1*

- (d) vector<int> v4{10}; // *1 element with value 10*

- (e) vector<int> v5{10, 42}; // *2 element with value 10 and 42*

- (f) vector<string> v6{10}; // *10 elements*

- (g) vector<string> v7{10, "hi"}; // *10 elements with value "hi"*

## Exercise 3.14:
> Write a program to read a sequence of ints from cin and store those values in a vector.

[Exercise 3.14 code](ex03_14.cpp)

## Exercise 3.15:
> Repeat....

## [Exercise 3.16](ex03_16.cpp)

## [Exercise 3.17](ex03_17.cpp)

## Exercise 3.18:
> Is the following program legal? If not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```

No. `push_back()` should be used here. `ivec[0]` is an empty value.

## Exercise 3.19:
> List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.

- vector<int> ivec1(10, 42);
- vector<int> ivec2{42,42, 42, 42, 42, 42, 42, 42, 42, 42 };
- ```cpp
vector<int> ivec3;
for (int i = 0; i != 10; ++i)
    ivec3.push_back(10);
	```

## Exercise 3.20:
> Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to- last, and so on.

[Exercise 3.20 Code](ex03_20.cpp)

