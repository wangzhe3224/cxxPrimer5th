# Chapter 12 Dynamic Memory

## Exercise 12.1
> How many elements do b1 and b2 have at the end of this code?

~~~cpp
StrBlob b1;
{
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");
}
~~~

`b1` has four elements. `b2` is destroyed because it goes out of the range.

## Exercise 12.2 | [.h](StrBlob.h), [.cpp](StrBlob.cpp)

## Exercise 12.3
> Does this class need const versions of push_back and pop_back? If so, add them. If not, why aren’t they needed?

I don't think so. This class only has one data member which is a shared_ptr(pointer). So I can add element to the vector to which the pointer points wiouth changing the pointer itself. That means even if I add `const` to the function, I can still change the vector...

## Exercise 12.4
> In our check function we didn’t check whether i was greater than zero. Why is it okay to omit that check?

Because `i` is a size_type which is an unsigned type.

## Exercise 12.5
> We did not make the constructor that takes an initializer_list explicit (§ 7.5.4, p. 296). Discuss the pros and cons of this design choice.

- If we **don't** use  keyword `explicit`:
  * Allow automatic conversion. In this case, `StrBlob s1 = {"1","2"}` is OK and it looks legible.
  * But sometimes, it doesn't looks legible. For example, `std::vector<int> v = 20;`. What is the meaning of this statement if there is `explicit` in the constructor of `std::vector<type>`? A vector contains one element of 20? Or A vector contains 20 elements?

## Exercise 12.6 | [Code](ex12_06.cpp)

## Exercise 12.7 | [Code](ex12_07.cpp)

## Exercise 12.8

Pointer `p` will be convered to a bool type, and we can never free the memory space by the pointer.

## Exercise 12.9

- when `r = q`, r points to the memory space of `int(100)`, and `int(42)` losed the pointer. Memory leakage will happen cause we can't free `int(42)`.

- when `r2 = q2`, the reference count of `r2` will become 0 and `r2`'s memory space is freed automatically.

## Exercise 12.10

Correct.

## Exercise 12.11
> process(shared_ptr<int>(p.get()));

We can't do this.  
In this case, a temporary smart pointer is passing to the function `process`, but this temporary smart pointer points to the same space as p does. When the function ends, the temporary pointer will be destructed which also frees the memory space. For now, smart pointer `p` points to a freed space....

## Exercise 12.12

~~~
auto p = new int();
auto sp = make_shared<int>();
void process(shared_ptr<int> ptr)
{
    // use ptr
} // ptr goes out of scope and is destroyed
~~~

a. `process(sp)`: legal. `sp` has a sheard_prt type. A copy of `sp` passes into the process function. The reference count increases 1, and when the function call the reference decrease 1.

b. `process(new int())`: illegal. plain pointer can not implicitly converts to a shared_ptr.

c. `process(p)`: illegal. The same reason as b.

d. `process(shared_ptr<int>(p))`: legal. But this is dangeours. Because the temprory smart pointer may free the memory space pointed by p then p becomes a danling pointer....

## Exercise 12.13

~~~
auto sp = make_shared<int>();
auto p = sp.get();
delete p;
~~~

Error. In this case, plain pointer `p` and smart pointer `sp` point to the same memory space. But `p` is explicitly freed, when `sp` destructs, it will try to free the same space twice!  
But whether `sp` is going to destruct depends on its reference count.


