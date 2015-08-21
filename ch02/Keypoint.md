- The type of an object defines the data that an object might contain and what
operations that object can perform.

- More generally, a declaration is a *base-type* followed by a list of *declarators*.

- **Compound type** is type that is defined in terms of another type.
> *reference* and *pointer* are two important compound type.

- **reference** defines a alternative name for an object. A reference must be initialized when defined. There is no way to *rebind* a reference.
> A reference is not an object, it is just another name for an already *existing* object.

> After a reference is defined, all operations on that reference are actually operations on the object to which the reference is bound.

> Can not define a reference to a reference, Because reference is not an object.

- **Pointer** is an object, which is quite different from reference. A pointer holds the address of another object.
> Uninitialized pointers are a common source of run-time error.

> Assignment changes its left-hand operand.

- **int *p** or **int* p**?
> It better to be `int *p`. Here is the reason:

- `int` is the base-type while `int*` is not a base type.

- `*` or `&` is a type modifer which can be applied to all the variables.
`int *p` :  p is a *point-to* int type (base-type)

- Read type modifer from right to left.

- **low-level** and **top-level** `const`:
> When we copy an object, top-level consts are ignored

> we can convert `int*` to `const int*`

- auto tells the compiler to deduce the type from the initializer.

- auto ordinarily ignores *top-level* consts. 想在emacs里面输入中文还真费劲

- We can't bind a plain reference to a literal.

- *decltype* returns a reference type for expressions that yield objects that can stand on the left-hand side of the assignment.

### NOTE:
decltype(( variable )) (note, double parentheses) is always a reference type, but decltype( variable ) is a reference type only if variable is a reference.


