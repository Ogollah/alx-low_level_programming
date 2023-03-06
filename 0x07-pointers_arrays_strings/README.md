# 0x07. C - Even more pointers, arrays and strings
## General
* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

# Tasks
## 0. memset
Write a function that fills memory with a constant byte.

* Prototype: `char *_memset(char *s, char b, unsigned int n);`
* The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
* Returns a pointer to the memory area `s`
##### FYI: The standard library provides a similar function: memset. Run man memset to learn more.