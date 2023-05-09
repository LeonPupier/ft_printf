# ft_printf

This project was completed as part of the curriculum at École 42. The goal of the project is to implement a version of the printf function from the C standard library, and to learn about variable argument lists and string manipulation in the process.

## Installation

To use the `ft_printf` function in your own projects, follow these steps:

1. Clone the repository to your local machine.
2. Open a terminal window and navigate to the root directory of the project.
3. Run the command `make` to compile the library.
4. Include the header file `ft_printf.h` in your source code.
5. Call the `ft_printf` function with the format string and any arguments you want to print.

## Usage

The `ft_printf` function works much like the standard `printf` function, allowing you to format and print text to the console or to a file. The function takes a format string as its first argument, followed by a variable number of arguments depending on the format specifiers in the string.

Here are some examples of how to use the `ft_printf` function:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, world!\n");

    int num = 42;
    ft_printf("The answer is %d.\n", num);

    char *str = "example";
    ft_printf("This is an %s.\n", str);

    return 0;
}
```

In this example, the `ft_printf` function is used to print a simple message, an integer variable, and a string variable to the console.

The `ft_printf` function supports a wide range of format specifiers, including integers, characters, strings, and pointers. For a full list of format specifiers and their descriptions, see the `ft_printf.h` header file.

## Credits

This project was completed by Léon Pupier (lpupier) as part of the curriculum at École 42.
