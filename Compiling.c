   This is a step-by-step guide to compiling a C program using the GNU Compiler Collection (GCC). Here's a breakdown of each step:

1. *Write the C program*: Create a file called `hello.c` containing the C program you want to compile.

2. *Open a terminal or command prompt*: Open a terminal or command prompt and navigate to the directory where your `hello.c` file is located.

3. *Compile the C program*: Use the `gcc` command to compile your C program. The `-o` option specifies the output file name (`hello.exe`).

4. *Verify the compilation*: Check if the compilation was successful by listing the files in the directory (`ls`). You should see the compiled executable file (`hello.exe`).

5. *Run the executable*: Run the compiled program by executing the executable file (`./hello.exe`).

The second part of the guide explains the detailed compilation process, including:

1. *Preprocessing*: The preprocessor processes directives like `#include` and `#define`. You can use the `-E` option to run only the preprocessor and output the result to a file (`hello.i`).

2. *Compilation*: The compiler translates the preprocessed source code into assembly code. You can use the `-S` option to compile only and output the assembly code to a file (`hello.s`).

3. *Assembly*: The assembler converts the assembly code into machine code. You can use the `-c` option to compile and assemble, but not link, and output the object file (`hello.o`).

4. *Linking*: The linker combines the object file with libraries to create the final executable. You can use the `gcc` command without options to perform the linking stage and output the final executable (`hello.exe`).

The guide also shows how to verify each stage by checking the output files.


Here is the step-by-step process of compiling a .c file to an .exe file, along with the terminal commands to verify each step:

Step 1: Preprocessing
```
shell
gcc -E file.c -o file.i
```
Verification:
```
bash
ls
cat file.i
```
This will show the preprocessed file `file.i` and its contents.

Step 2: Compilation
```
gcc -S file.i -o file.s
```
Verification:
```
bash
ls
cat file.s
```
This will show the compiled assembly code file `file.s` and its contents.

Step 3: Assembly
```
shell
gcc -c file.s -o file.o
```
Verification:
```
bash
ls
objdump -d file.o
```
This will show the object file `file.o` and its disassembled contents.

Step 4: Linking
```
gcc file.o -o file.exe
```
Verification:
```
bash
ls
file file.exe
```
This will show the final executable file `file.exe` and its file type.

Step 5: Execution
```
./file.exe
```
Verification:
```
./file.exe
```
This will run the program and show its output.

Here are the commands to compile and verify the entire process:
```
shell
gcc -E file.c -o file.i
gcc -S file.i -o file.s
gcc -c file.s -o file.o
gcc file.o -o file.exe
./file.exe
```
