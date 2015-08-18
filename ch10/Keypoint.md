# Some points in learning....

## Pointers act like iterators on built-in arrays

> That is why we can do this: `auto result = find(ia + 1, ia + 4, val);`.

## The Algorithm *never* excute container operations.

> They do *not* ever add or remove element in the container.

## The algorithms that take an input range always use their first two parameters to denote that range.

## Ordinarily it is best to use cbegin() and cend() in a Read-Only Algorithm.

