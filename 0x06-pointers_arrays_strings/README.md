# 0x06. C - More pointers, arrays and strings
## General
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables


### Defination and notation
A pointer is a variable used to store an address of a nother variable. The syntax for storing a variable's address to pointer is:
```C
data_type *pointerVariableName = &variableName;
```
for example:

```C
int digit = 123;

can  be written like this

int *Pdigit = &digit;

or 

int *Pdigit;
Pdigit = &digit;

```
`dataType` is needed to tell the computer what the data type of the variable is whose address we are storing. in this case `int` is the data type of the `digit` variable.
`*` is used in declaration of a pointer variable.

### The wild pointer
```C
char *alphabetAddress; /* uninitialised or wild pointer */
char alphabet = "a";
alphabetAddress = &alphabet; /* now, not a wild pointer */
```

If we `deference` a `wild pointer` and assign a value to the memory address it is pointing at. This will lead to unexpexted behaviour since we will write data at a memory block that might be free or reserved.

### Null pointer

To elimite wild pointe, we can initialize a pointer with a `NULL` value to make it a `null poiter`

```C
char *alphabetAddress = NULL /* Null pointer */ 
```
it points at nothing/ a memory address that user can not access.

### Void pointer
Used to point to a variable of any data type and can be reused to point at any data type that we want. They are also known as `generic pointers`. decleared as below.
```C
void *pointerVariableName = NULL;
```
Void pointers `cannot` be dereferenced as any other pointer. their is need to use appropriate `typecasting`.

``` C
void *pointer = NULL;
int number = 54;
char alphabet = "z";
pointer = &number;
printf("The value of number = ", *pointer); /* Compilation Error */
/* Correct Method */
printf("The value of number = ", *(int *)pointer); /* prints "The value at number = 54" */
pointer = &alphabet;
printf("The value of alphabet = ", *pointer); /* Compilation Error */
printf("The value of alphabet = ", *(char *)pointer); /* prints "The value at alphabet = z */
```
## Tasks
### 0. strcat
Write a function that concatenates two strings.

* Prototype: `char *_strcat(char *dest, char *src);`
* This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
* Returns a pointer to the resulting string `dest`
#### FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.        
### 1. strncat
Write a function that concatenates two strings.

* Prototype: `char *_strncat(char *dest, char *src, int n);`
* The `_strncat` function is similar to the `_strcat` function, except that
    * it will use at most n bytes from `src`; and
    * `src` does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string `dest`
#### FYI: The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.
### 2. strncpy
Write a function that copies a string.

* Prototype: `char *_strncpy(char *dest, char *src, int n);`
* Your function should work exactly like `strncpy`
#### FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.

### 3. strcmp
Write a function that compares two strings.

* Prototype: `int _strcmp(char *s1, char *s2);`
* Your function should work exactly like `strcmp`
#### FYI: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.
### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
Write a function that reverses the content of an array of integers.

* Prototype: `void reverse_array(int *a, int n);`
* Where `n` is the number of elements of the array