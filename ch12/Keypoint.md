- Programs tend to use dynamic memory for one of three purposes:

1. They don’t know how many objects they’ll need  
2. They don’t know the precise type of the objects they need  
3. They want to share data between several objects  

- Three different kinds of memory space:

1. Static memory  
> For local static objects, class static data members and variables defined outside the function.

2. Stack memoty  
> For non-static object defined inside the function.

3. Heap or Free momory  
> For object that is dynamically allocated during the run time.

> For `static` and `stack` memory, the compiler will handle their creation and and desctruction. But, for the `heap`, it is the program that handles the creating and destroying. In troditional c, operator `new` and `delete` and pointers are used to handle dynamic memory.

> In c++ 11, smart pointer template is used to handle dynamic memory (easy and safe).

- Reference count of the share_ptr
	- The reference increments when:
			* Use the pointer to initialize another share_ptr;  
			* Use it as a right hand oprand of assignment operator;   
			* Pass it or return it form a function **by value**
	- The reference decrements when:
			* Assign a new value to the share_ptr
			* The share_ptr is destoried
	- When the reference count is zero, the share_ptr frees the object that it manages.
			

