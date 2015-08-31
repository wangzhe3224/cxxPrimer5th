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


