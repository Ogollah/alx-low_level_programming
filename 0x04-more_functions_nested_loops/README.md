# 0x04. C - More functions, more nested loops
## Resources
### Read or watch:

* [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
* [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
* [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (*stop at 14:00*)
* [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
* [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (*stop before the “Once-Only Headers” paragraph*)

# Tasks
## 0. isupper     || mandatory
Write a function that checks for uppercase character.

* Prototype: `int _isupper(int c);`
* Returns `1` if `c` is uppercase
* Returns `0` otherwise.
### FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

## 1. isdigit || mandatory
Write a function that checks for a digit (`0` through `9`).

* Prototype: `int _isdigit(int c);`
* Returns `1` if `c` is a digit
* Returns `0` otherwise
### FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

## 2. Collaboration is multiplication || mandatory
Write a function that multiplies two integers.

Prototype: `int mul(int a, int b);`

## 3. The numbers speak for themselves || mandatory
Write a function that prints the numbers, from `0` to `9`, followed by a new line.

* Prototype: `void print_numbers(void);`
* You can only use `_putchar` twice in your code

## 4. I believe in numbers and signs || mandatory
Write a function that prints the numbers, from `0` to `9`, followed by a new line.

* Prototype: `void print_most_numbers(void);`
* Do not print `2` and `4`
* You can only use `_putchar` twice in your code

## 5. Numbers constitute the only universal language || mandatory
Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

* Prototype: `void more_numbers(void);`
* You can only use `_putchar` three times in your code

## 6. The shortest distance between two points is a straight line || mandatory
Write a function that draws a straight line in the terminal.

* Prototype: `void print_line(int n);`
* You can only use `_putchar` function to print
* Where n is the number of times the character `_` should be printed
* The line should end with a `\n`
* If `n` is `0` or less, the function should only print `\n`

## 7. I feel like I am diagonally parked in a parallel universe || mandatory
Write a function that draws a diagonal line on the terminal.

* Prototype: `void print_diagonal(int n);`
* You can only use `_putchar` function to print
* Where `n` is the number of times the character `\`should be printed
* The diagonal should end with a `\n`
* If n is 0 or less, the function should only print a `\n`
