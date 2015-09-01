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


