#  Answer to Chapter 09

## Exercise 9.1:
> Which is the most appropriate—a vector, a deque, or a list—for the following program tasks? Explain the rationale for your If there is no reason to prefer one or another container, explain why not.

- a) Read a fixed number of words, inserting them in the container alphabetically as they are entered. We’ll see in the next chapter that associative containers are better suited to this problem.

`std::set` is the best choice. vector and deque are also good. Because we dont need to insert element in the middle of the container.

- b) Read an unknown number of words. Always insert new words at the back. Remove the next value from the front.

`deque` is the best.

- c) Read an unknown number of integers from a file. Sort the numbers and then print them to standard output.

`vector` is the best.

## Exercise 9.2:
>Define a list that holds elements that are deques that hold ints.

```cpp
std::list<std::deque<int>> lst;
```
## Exercise 9.3:
>What are the constraints on the iterators that form iterator ranges?

It is possible to reach `end` by repeatedly incrementing `begin`.

## Exercise 9.4:
>Write a function that takes a pair of iterators to a vector<int> and an int value. Look for that value in the range and return a bool indicating whether it was found.

```cpp
bool find(vector<int>::iterator beg, vector<int>::iterator end, int value) {
for (auto iter = beg; iter != end; ++iter)
if (*iter == value) return true;
return false;
}
```

## Exercise 9.5:
>Rewrite the previous program to return an iterator to the requested element. Note that the program must handle the case where the element is not found.

```cpp
typedef vector<int>::iterator It;
It find(It beg, It end, int value) {
	for (auto iter = beg; beg != end; ++iter) {
	if (*iter == value) return iter;
	}
	return end;
}
```

## Exercise 9.6:
>What is wrong with the following program? How might you correct it?

```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while (iter1 < iter2) /*ERROR: operator< can't be applied to iterator for list*/
```

fixed:
`while (iter1 != iter2)`.

## Exercise 9.7:
>What type should be used as the index into a vector of ints?

`vector<int>::size_type`

## Exercise 9.8:
>What type should be used to read elements in a list of strings? To write them?

`list<string>::iterator`

## Exercise 9.9:
>What is the difference between the `begin` and `cbegin` functions?

`begin` is nonconst and returns *iterator* type.

`cbegin` is const and returns *const iterator* type.

## Exercise 9.10:
>What are the types of the following four objects?
```cpp
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```
--------------------------------------

## Exercise 9.11:
>Show an example of each of the six ways to create and initialize a vector. Explain what values each vector contains.

```cpp
typedef vector<int> Vint;
Vint vec1;
Vint vec2(10); // *10 elements with value 10*
Vint vec3(10, 1); // *10 elements with value 1*
Vint vec4{1,2,3,4,5};
vint vec5(otherVint);
Vint vec6(OtherVint.begin(), OtherVint.end());
```

## Exercise 9.12:
>Explain the differences between the constructor that takes a container to copy and the constructor that takes two iterators.

- The constructor takes another container as an argument (excepting array) assumes the container type and element type of both containers are identical.

- The constructor that takes two iterators as arguments does not require the container types to be identical. Moreover, the element types in the new and original containers can differ as long as it is possible to convert the elements we’re copying to the element type of the container we are initializing.

## Exercise 9.13:
> How would you initialize a vector<double> from a list<int>? From a vector<int>? Write code to check your answers.

[Exercise 9.13 code](ex09_13.cpp)

## Exercise 9.14:
> Write a program to assign the elements from a list of char* pointers to C-style character strings to a vector of strings.

[Exercise 9.14 Code](ex09_14.cpp)

## Exercise 9.15:
>Write a program to determine whether two vector<int>s are equal.
## Exercise 9.16:
> Repeat the previous program, but compare elements in a list<int> to a vector<int>.
## Exercise 9.17:
> Assuming c1 and c2 are containers, what (if any) constraints does the following usage place on the types of c1 and c2? if (c1 < c2).

## [Exercise 9.18](ex09_18.cpp)

## [Exercise 9.19](ex09_19.cpp)

## [Exercise 9.20](ex09_20.cpp)

## Exercise 9.21:
>Explain how the loop from page 345 that used the return from insert to add elements to a list would work if we inserted into a vector instead.

- `insert` function return an iterator of the inserted element.

## Exercise 9.22:
>Assuming `iv` is a `vector` of `int`s, what is wrong with the following program? How might you correct the problem(s)?
'''cpp
vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2;
while (iter != mid)
    if (*iter == some_val)
		iv.insert(iter, 2 * some_val);
```

- iterator `iner` never reached `mid`.

- `mid` will be invalid after insert function, which chages the container.

*How to fix this?*

```cpp


## Exercise 9.23:
> In the first program in this section on page 346, what would the values of val, val2, val3, and val4 be if c.size() is 1?

Same value that equal to the first element's.

## [Exercise 9.24](ex09_24.cpp)

## Exercise 9.25:
>In the program on page 349 that erased a range of elements, what happens if elem1 and elem2 are equal? What if elem2 or both elem1 and elem2 are the off-the-end iterator?

- If elem1 == elem2, nothing happens;

- If elem2 is off-the-end, delete from elem1 to the end;

- If both are off-the-end, nothing happens;

## [Exercise 9.50](ex09_50.cpp)

## [Exercise 9.51](ex09_51.cpp)


