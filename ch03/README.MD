# Answer to Chapter 03

## Exercise 3.1:
> rewrite...

## Exercise 3.2:
> Write a program to read the standard input a line at a time. Modify your program to read a word at a time.

[Exercise 3.2](ex03_01.cpp)

## Exercise 3.3:
> Explain how whitespace characters are handled in the string input operator and in the getline function.

The input operator `>>` will divide the string by whitespace, while the function `getline(cin,xxx)` will receive all the string inputed including the whitespace.

## Exercise 3.4:
> Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer.

### [Exercise 3.4](ex03_04.cpp)

## Exercise 3.5:
> Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate adjacent input strings by a space.

### [Exercise 3.5](ex03_05.cpp)

## Exercise 3.6:
> Use a range for to change all the characters in a string to X.

```cpp
\#include <string>
using namespace std;
int main() {
	string str = "WangZhe";
	for (auto &c : str)
		c = 'X';
	return 0;
}
```
