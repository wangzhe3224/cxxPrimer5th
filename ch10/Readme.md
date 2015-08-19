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

See the fixed [Code](ex10_07.cpp)

## Exercise 10.8:
> We said that algorithms do not change the size of the containers over which they operate. Why doesn’t the use of back_inserter invalidate this claim?

Because `back_inserter` is an **insert iterator**, the iterator adaptor generates an iterator which uses a container operator to add element. So it is acctually the iterator rather than the algorithm that change the size of the vector.

## [Exercise 10.9](ex10_09.cpp)


## Exercise 10.10:
> Why do you think the algorithms don’t change the size of container.

It may make the iterator invalid!

## [Exercise 10.11](ex10_11.cpp)

## Exercise 10.12:
Waiting.....

## [Exercise 10.13](ex10_13.cpp)

## Exercise 10.14:
> Write a lambda that takes two ints and returns their sum.

`auto add = [](int a, int b){ return a+b; }`

## Exercise 10.15:
> Write a lambda that captures an int from its enclosing function and takes an int parameter. The lambda should return the sum of the captured int and the int parameter.
`int i;`

...

`auto add = [i](int j){ return i+j; }`

## [Exercise 10.16](ex10_16.cpp)

## Exercise 10.17:
Waiting.........

## [Exercise 10.18](ex10_18.cpp)

## [Exercise 10.19](ex10_19.cpp)

## [Exercise 10.20](ex10_20.cpp)
- keep in mind that there is a `=` in the capture list.

## Exercise 10.21:
>Write a lambda that captures a local int variable and decrements that variable until it reaches 0. Once the variable is 0 additional calls should no longer decrement the variable. The lambda should return bool that indicates whether the captured variable is 0.
### [Exercise 10.21 Code](ex10_21.cpp)

## [Exercise 10.22](ex10_22.cpp)

## Exercise 10.23:
> How many arguments does bind take?
bind(func0, parameters);

## [Exercise 10.24](ex10_24.cpp)

## Exercise 10.26:
> Explain the differences among the three kinds of insert iterators.

- back_inserter uses push_back.
- front_inserter uses push_front.
- insert uses insert >This function takes a second argument, which must be an iterator into the given container. Elements are inserted ahead of the element denoted by the given iterator.

## Exercise 10.38:
> List the five iterator categories and the operations that each supports.

- Input iterator: `==`, `!=`, `++`, `*`, `->`

- Output iterator: `++`, `*`

- Forward iterator: `==`, `!=`, `++`, `*`, `->`

- Bidirectional iterator: `==`, `!=`, `++`, `*`, `->`, `--`

- Random-access iterator: `==`, `!=`, `++`, `*`, `->`, `<`, `<=`, `>`, `>=`, `+`, `-`...

## Exercise 10.39:
> What kind of iterator does a list have? What about a vector?

- a list has Bidirectional iterator

- a vector has Random-access iterator

## Exercisr 10.40:
> What kinds of iterators do you think copy requires? What about reverse or unique?

- `copy`: the first two parameter need *input iterator*, the last needs *output iterator*.

- `reverse`: Bidirectional iterator.

- `unique`: forward iterator.

## Exercise 10.41:

- `replace(beg, end, old_val, new_val);`: replace the `old_elements` in the input range as `new_elements`.

- `replace_if(beg, end, pred, new_val);`: relpace those elements with pred true by `new_val`.

- `replace_copy(beg, end, dest, old_val, new_val);`: copy the new_elements which is old_elements in the input range into dest.

- `replace_copy_if(beg, end, dest, pred, new_val);`: copy the new_elements which pred is true in the input range into dest.

## [Exercise 10.42](ex10_42.cpp)
