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


