# Keypoints in chapter 11

### Associative container addtional types:
- `key_type`: Type of the key.

- `mapped_type`: Type of the value.(type associated with each key)

- `value_type`: For `set`, it is as same as key_type; For `map`, it is a pair<const key_type, mapped_type>

### Associative Container Iterators:
- How to get a iterator of associative container?

> auto map_iter = a_map.begin();

- Iterator of `set` is *const*.

### Associative and Algorithm
- In general, we do not use the generic algorithms (Chapter 10) with the associative containers.

- Associative containers can be used with the algorithms that read elements.

- Because elements in an associative container can be found (quickly) by their key, it is almost always a bad idea to use a generic search algorithm.

- It is much faster to use the `find` member defined by the container than to call the generic version.

### Adding elements
- insert(begin_iterator, end_iterator)

- insert({1,1,2,3,2})

- c.insert(v) // v is a value_type object.

- c.emplace(arg) // arg is used to construct an element

### Erase elements
- `c.erase(k)` : Remove element woth key `k`, return size_type

- `c.erase(p)` : Remove element denoted by iterator `p` to the end

- `c.erase(b, e)` : Remove elements in range of b and e.

### Subscripting element in assocaitive container
- We cannot subscript a multimap or an unordered_multimap because there may be more than one value associated with a given key.

- `c[k]`: return the value with key `k`, if k is not in c, creat a new object with the key `k`

- `c.at(k)`: Check access to the element with key `k`. if not in c, throw an `out_of_range` error

### 
