#   Project _Printf 

<h4><u>Description </u>:</h4>

This project implements a simplified version of the `printf` function in the C language. The main function, `_printf`, is designed to format and print different types of data based on the format specifiers provided in the input string.

The _printf function is an output function that prints characters to stdout/console/command shell. It returns the number of characters printed to the output file stream (stdout/console/shell).

_printf takes a formatting string and a number of optional arguments. It converts these arguments (char, string, int, long, float, double, etc.) to printable strings, and the final constructed string is transferred to the stdout file stream.

The symbol % denotes the beginning of a format mark. The mark %d is replaced by the value of the counter variable, and the resulting string is printed. The symbol "\n" represents a new line.

<br>

# Data types

 | SYMBOLE         | TYPE                      |     OUTPUT FORMAT|
 | -------------- | ---------------- | ---------|
 |  %s                     | char *	                  | String  (pointer to the first character)|
 | %d                     | int                         | Decimal integer (base 10) |
 |   %i                      | int                         | Decimal integer (base 10), octal (base 8 with the prefix 0), hexadecimal (base 16 with the prefix 0x)|
 | %%                   | caractere %        | Displays the character %

 <br>

 # Requirements
    Environnement Ubuntu 20
    GCC
    Git

   <br>

   ## <u>How to use the _printf function in your project</u> :

- Use the <i>Ubuntu 20</i> environment for better functionality and contability
- Include all files available in the Files and Structure section in your C source code.
- Use the _printf function in your main.c code by providing a format string and other arguments as needed see main.c example with the result in the part (<i>Manage data types</i>).
- Use the gcc command provided in the compile command

<br>

***
<br>

## <u>Files and Structure</u>:
<h5>Click on each file name for more details</h5>

<details><summary><i>_printf.c</i></summary><br>
  This file contains the implementation of the _printf.c, function, which is responsible for processing format specifiers and calling the corresponding print functions to print the specified types.<br>
 Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/_printf.c">File links</a>
 </details>

<details><summary><i>main.h</i></summary> 
Header file that includes function prototypes and the definition of the op_t structure, associating format specifiers with their corresponding print functions.<br>
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/main.h">File links</a>
</details>

<details><summary>print_char.c</summary>
Implemented the `print_char` function, which handles the `%c` specifier to print a single character. <br>
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/print_char.c">File links</a>
</details>

<details><summary>print_string.c</summary>
Implemented the `print_string` function, which handles the `%s` specifier to print a character string.<br>
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/print_string.c">File links</a>
 </details>

<details><summary>print_decimal.c</summary>
Implemented the `print_decimal` function, which handles the `%d` and `%i` specifiers to print decimal integers.<br> 
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/print_decimal.c">File links</a>
</details>

<details><summary>print_integer.c</summary>
Implemented the `print_integer` function, which handles the `%d` and `%i` specifiers to print integers.<br> 
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/print_integer.c">File links</a>
</details>

<details><summary>print_percent.c</summary>
Implemented the `print_percent` function, which handles the `%%` specifier to print a percent sign. <br>
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/print_percent.c">File links</a>
</details>

<details><summary>print_positive_int.c</summary>
Implemented the `print_positive_int` function, an auxiliary function for printing positive integers.<br>
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/print_positive_int.c">File links</a>
 </details>

<details><summary>_putchar.c</summary>
Implemented the `_putchar` function, which prints a single character to standard output.<br> 
Github:  <a href = "https://github.com/HB74C21/holbertonschool-printf/blob/main/_putchar.c">File links</a>
</details>

<br>

***

<br>

## Compile command

 Your code will be compiled as follows:
 ```bash
 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf

 The command to execute the code will be ./my_printf
 ```

 <br>

***
 
 <br>

<h1> Manage data types: </h1>

#### <u>Data type</u>: %c

 <details><summary> <u><i>Click here to show/hide the example concerning %c:</u></i></summary>
 <br>

 To display the character “A” in uppercase:

 <br>

 <u>Example of main.c file</u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    char character = 'A';

    _printf("%c\n", character);
    return 0;
 }
 ```

 <br>

 Shows on the terminal after compiling and executing the code:
 
 <br>

 ```bash
 $  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 A
 $
 ```
 </details>

 <br>

***

 <br>

#### <u>Data type</u>: %s

 <details><summary> <u><i>Click here to show/hide the example concerning %s:</u></i></summary>
 <br>

 To display the phrase "Hello, World!"

 <br>

 <u>Example of main.c file</u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    char *str = "Hello, World!";

    _printf("String: [%s]\n", str);
    return 0;
 }
  ```
  
  <br>

Shows on the terminal after compiling and executing the code:

 <br>

 ```bash
 $  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 Hello, World!
 $
 ```
 </details>

 <br>

***

 <br>

#### <u>Data type</u>: %d

 <details><summary> <u><i>Click here to show/hide the example concerning %d:</u></i></summary>
 <br>
 
 To display the integer "-42"

 <br>

  <u>Example of main.c file</u>:

  <br>
 
  ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    int number = -42;

    _printf("-42\n", number);
    return 0;
 }
 ```

 <br>

 Shows on the terminal after compiling and executing the code:

  <br>

 ```bash
 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 -42
 $
 ```
 </details>

 <br>

***

 <br>

#### <u>Data type</u>: %i

 <details><summary> <u><i>Click here to show/hide the example concerning %i:</u></i></summary>
 <br>
 
To display the integer 255 using its decimal form (base 10).

 <br>

 <u>Example of main.c file</u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    int decimalNumber = 255;

    _printf("%i\n", decimalNumber);

    return 0;
 }
 ```

 <br>

  Shows on the terminal after compiling and executing the code:
 
 <br>
 
 ```bash
 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 255
 $
 ```
 </details>

 <br>

***

 <br>

#### <u>Data type</u>: %%
 <details><summary> <u><i>Click here to show/hide the example concerning %%</u></i></summary>
 <br>

We simply want to display the character`%`.

 <u>Example of main.c file</u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    _printf("%%\n");

    return 0;
 }
 ```

<br>

Shows on the terminal after compiling and executing the code:

 ```bash
 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 %
 $
 ```
 </details>

 <br>

 ***

 <br>

 ## Authors of project _printf :

 Bouabdallah Hocine  & Santos Nascimento Néia

 version 1.0

