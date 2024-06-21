# ALX Low-Level Programming

## Project Description

This project includes a script and a C program file.

### Files Included

1. **main.c**
    - The primary C source file that contains the code to be preprocessed, compiled, and assembled.

2. **0-preprocessor**
    - A bash script that preprocesses the `main.c` file using `gcc` and saves the preprocessed output to a file named `c`.

3. **1-compiler**
    - A bash script that compiles the C file stored in the variable `$CFILE` but does not link it. The output file has the same name as the C file but with a `.o` extension.

4. **2-assembler**
    - A bash script that generates the assembly code of a C file stored in the variable `$CFILE` and saves it in an output file with a `.s` extension.

5. **3-name**
    - A bash script that compiles a C file stored in the variable `$CFILE` and creates an executable named `cisfun`.

6. **4-puts.c**
    - A C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line using the `puts` function. The program returns 0.

7. **5-printf.c**
    - A C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line using the `printf` function. The program returns 0 and compiles without warnings when using the `-Wall` gcc option.

8. **6-size.c**
    - A C program that prints the size of various types on the computer it is compiled and run on. The program returns 0.

9. **100-intel**
    - A bash script that generates the assembly code (Intel syntax) of a C file stored in the variable `$CFILE` and saves it in an output file with a `.s` extension.

10. **101-quote.c**
    - A C program that prints exactly "and that piece of art is useful\" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error. The program returns 1 and compiles without warnings when using the `-Wall` gcc option.
