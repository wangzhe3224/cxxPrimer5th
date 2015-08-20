# Chapter 11 Associative Container

## Exercise 11.1:
> Describe the differences between a map and a vector.

A map is indexed by `key` while a vector is indexed by `iterator`.

## Exercise 11.2:
> Give an example of when each of list, vector, deque, map, and set might be most useful.

- *list*: A time table which stores things need to be done.

- *vector*: Date needs frequent indexing access.

- *deque*: IO buffers.

- *map*: Dictionary.

- *set*: Exception handling.

## [Exercise 11.3](ex11_03.cpp)

## [Exercise 11.4](ex11_04.cpp)
> Some Tips:
remove_if() is an algorithm which means it never deletes any element in the container. std::string::erase() is a Modifier which will change the string container..

## Exercise 11.5:
> Explain the difference between a map and a set.

- `map`: the element in the map is *key-value* pair.

- `set`: only has *key*.

## Exercise 11.6:
> Explain the difference between a set and a list.

- `set`: without order

- `list`: order and can be indexed..

## [Exercise 11.7](ex11_07.cpp)

## [Exercise 11.8](ex11_08.cpp)

## Exercise 11.9:
> Define a map that associates words with a list of line numbers on which the word might occur.

`std::map<std::string, std::vector<int>>;`

[exercise 11.9](ex11_09.cpp)

## Exercise 11.10:
> Could we define a map from vector<int>::iterator to int? What about from list<int>::iterator to int? In each case, if not, why not?

- `map<vector<int>::iterator, int>` is ok.

- `map<list<int>::iterator, int>` will produce error, because list iterator has no operator<.

## Exercise 11.11:

```cpp
multiset<Sales_data, decltype(compareIsbn)*>
bookstore(compareIsbn);
```

## [Exercise 11.12 and 11.13](ex11_12.cpp)

## [Exercise 11.14](ex11_14.cpp)

## Exercise 11.15:
> What are the mapped_type, key_type, and value_type of a map from int to vector<int>?

- `mapped_type`: vector<int>

- `key_type`: int

- `value_type`: pair<int, vector<int>>

## Exercisr 11.16:
> Using a map iterator write an expression that assigns a value to an element.

```cpp
std::map<int, int> a_map;
a_map[1] = 25;
auto mapIter = a_map.begin();
mapIter->second = 200;
```

## Exercise 11.17:
> Assuming c is a multiset of strings and v is a vector of strings, explain the following calls. Indicate whether each call is legal:

```cpp
copy(v.begin(), v.end(), inserter(c, c.end())); // legal
copy(v.begin(), v.end(), back_inserter(c)); // illegal, no `push_back` in `set`.
copy(c.begin(), c.end(), inserter(v, v.end())); // legal.
copy(c.begin(), c.end(), back_inserter(v)); // legal.
```

## [Exercise 11.18](ex11_18.cpp)

## Exercise 11.19:
> Define a variable that you initialize by calling begin() on the multiset named bookstore from 11.2.2 (p. 425). Write the variable’s type without using auto or decltype.

```cpp
using compareType = bool (*)(const Sales_data &lhs, const Sales_data &rhs);
std::multiset<Sales_data, compareType> bookstore(compareIsbn);
std::multiset<Sales_data, compareType>::iterator c_it = bookstore.begin();
```

## [Exercisre](ex11_20.cpp)

## Exercise 11.21:
> explain the following loop:

```cpp
while (cin >> word)
++word_count.insert({word, 0}).first->second;
```

- Insert {word, 0} into the map and add the count.

## Exercise 11.22:
> Given a map>, write the types used as an argument and as the return value for the version of insert that inserts one element.

```cpp
std::pair<std::string, std::vector<int>> // use arg
std::pair<std::map<std::string, std::vector<int>>::iterator, bool>
```

## [Exercisr 11.23](ex11_23.cpp)

## Exercise 11.24:
> What does the following program do?

```cpp
map<int,int> m;
m[0] = 1;
```

Creat a map `m`, add pair<int,int>(0,1) into the map.

## Exercise 11.25:
> Contrast the following program with the one in the previous exercise

```cpp
vector<int> v;
v[0] = 1;
```

Out of range....

## [Exercise 11.33](ex11_33.cpp)


