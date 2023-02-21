# 0x02. C - Functions, nested loops

## Resources
### Read or watch
* [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
* [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
* [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (*stop at 14:00*)
* [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
* [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (*stop before the “Once-Only Headers” paragraph*)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**
### General
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the ``gcc`` flags ``-Wall -Werror -pedantic -Wextra -std=gnu89``
* What are header files and how to to use them with ``#include``

## Requirements
### General
* Allowed editors: ``vi``, ``vim``, ``emacs``
* All your files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
* All your files should end with a new line
* A ``README.md`` file, at the root of the folder of the project is mandatory
* Your code should use the ``Betty`` style. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like ``printf``, ``puts``, etc… is forbidden
* You are allowed to use ``_putchar``
* You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ``main.c`` files at compilation. Our ``main.c`` files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function ``_putchar`` should be included in your header file called ``main.h``
* Don’t forget to push your header file

# Tasks
## 0. _putchar
Write a program that prints ``_putchar``, followed by a new line.

* The program should return ``0``

## 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.

* Prototype: ``void print_alphabet(void);``
* You can only use ``_putchar`` twice in your code
## 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

* Prototype: ``void print_alphabet_x10(void);``
* You can only use ``_putchar`` twice in your code

## 3. islower
Write a function that checks for lowercase character.

* Prototype: ``int _islower(int c);``
* Returns ``1`` if c is lowercase
* Returns ``0`` otherwise
FYI: The standard library provides a similar function: ``islower``. Run ``man islower`` to learn more.

## 4. isalpha
Write a function that checks for alphabetic character.

* Prototype: ``int _isalpha(int c);``
* Returns ``1`` if `c` is a letter, lowercase or uppercase
* Returns ``0`` otherwise
FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.
