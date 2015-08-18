# Chapter 10 Generic Algorithm

## Exercise 10.1:
>The algorithm header defines a function named count that, like find, takes a pair of iterators and a value. count returns a count of how often that value appears. Read a sequence of ints into a vector and print the count of how many elements have a given value.

[Exercise 10.1 Code](ex10_01.cpp)

## Exercise 10.2:
> Repeat the previous program, but read values into a list of strings.

## [Exercise 10.3](ex10_03.cpp)

## Exercise 10.4:
> Assuming v is a vector<double>, what, if anything, is wrong with calling accumulate(v.cbegin(), v.cend(), 0)?

The sum will be an integer other than a double. Because the third argument `0` decides the return type of the function is an integer.


## Exercise 10.5:
> In the call to equal on rosters, what would happen if both rosters held C-style strings, rather than library strings?

The address value will be compared rather than the string..

## [Exercise 10.6](ex10_06.cpp)

## Exercise 10.7:
'''cpp
vector<int> vec; list<int> lst; int i;
while (cin >> i)
	lst.push_back(i);
copy(lst.cbegin(), lst.cend(), vec.begin());
'''
> We should add `vec.resize(lst.size());` following the while loop. Because *Algorithm* never change the size of container. The vector `vec` is an empty vector beforethe resize() function. If we want to use the copy algorithm, we must make sure that the destination vector has enough space to hold the elements in lst.
----------------------------
```cpp
vector<int> vec;
vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
fill_n(vec.begin(), 10, 0);
```
> 
