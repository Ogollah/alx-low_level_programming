# 0x01. C - Variables, if, else, while
Variables are containers (storage area) to hold data.
to indicate the storage are, aech variable should be given a unique name (``identifier``).
Variable names are just the symbolic represantation of a memory location. For example
    ``int playerScore = 89;``
Here, ``playerScore`` is a variable of ``int`` type, and ``89`` is the integer value assigned.

* ``if`` statament in C programming is:
    ``` c
    if (test expression)
    {
        /** code here */
    }
    ```

* ``if ..else `` statament in C programming is:
    ```c
    if (test expression) 
    {
    /** run code if test expression is true */
    }
    else 
    {
        /** run code if test expression is false */
    }
    ```
* ``while `` and  `` do .. while `` conditions in C programming is:
    ```c
    while (testExpression) 
    {
    /**the body of the loop */
    }
    ```
    ```c
    do 
    {
    /** the body of the loop */
    }
    while (testExpression);
    ```
## 0. Positive anything is better than negative nothing
This program will assign a random number to the variable ``n`` each time it is executed. Complete the source code in order to print whether the number stored in the variable ```n``` is positive or negative.
* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
* The variable ``n`` will store a different value every time you will run this program
* You don’t have to understand what ``rand``, ``srand``, ``RAND_MAX`` do. Please do not touch this code
* The output of the program should be:
    * The number, followed by
        * if the number is greater than 0: ``is positive``
        * if the number is 0: ``is zero``
        * if the number is less than 0: ``is negative``
    * followed by a new line

## 1. The last digit
This program will assign a random number to the variable ``n ``each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable ``n``.

* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
* The variable ``n`` will store a different value every time you run this program
* You don’t have to understand what ``rand``, `srand`, and ````RAND_MAX```` do. Please do not touch this code
* The output of the program should be:
    * The string `Last digit of`, followed by
    * `n`, followed by
the string is, followed by
        * if the last digit of `n` is greater than 5: the string `and is greater than 5`
        * if the last digit of `n` is 0: the string `and is 0`
        * if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    * followed by a new line

## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line.
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

## 3. alphABET
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

## 4. When I was having that alphabet soup, I never thought that it would pay off
Write a program that prints the alphabet in lowercase, followed by a new line.
* Print all the letters except `q` and `e`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

## 5. Numbers
Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
* All your code should be in the `main` function

## 6. Numberz
Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
* You are not allowed to use any variable of type `char`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` twice in your code
* All your code should be in the `main` function

## 7. Smile in the mirror
Write a program that prints the lowercase alphabet in reverse, followed by a new line.
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the main function
* You can only use `putchar` twice in your code