# Some points in learning....

- Pointers act like iterators on built-in arrays

> That is why we can do this: `auto result = find(ia + 1, ia + 4, val);`.

- The Algorithm *never* excute container operations.

> They do *not* ever add or remove element in the container.

- The algorithms that take an input range always use their first two parameters to denote that range.

- rdinarily it is best to use cbegin() and cend() in a Read-Only Algorithm.

- The library algorithm operates on iterator, not containers. Therefore, an algorithm cannot directly add or remove elements.

- The form of lambda:
> [capture list]\(parameter list) -> return type { function body }

- We can **not** copy an ostream object, we can only reference it.

### Binding arguments
> #include <function> and bind() function.
- bind() function acts like a decorator in python...
> syntax:
`auto newCallable = bind(callable, arg_list)`
> example:
`auto check6 = bind(check_size, _1, 6) `
`string s = "hello";`
`bool b1 = check6(s)`

### placeholder namespace
> looks like: _1, _2, ...

### Parameter patterns of Algorithm
- `destination parameter`: More commonly bound to an insert iterator.

- `beg2`:Algorithms that take beg2 alone assume that the sequence beginning at beg2 is as large as the range denoted by beg and end.

