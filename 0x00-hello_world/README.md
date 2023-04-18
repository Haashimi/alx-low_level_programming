**Project:** 0x00. C - Hello, World </br>
**Resources** </br>
[“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M) </br>
[Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc) </br>
[Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ) </br>
[Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU) </br>
[Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA) </br>
[Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) </br>

**Tasks** </br>
**0. Preprocessor** </br>
 Write a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable $CFILE.
- The output should be saved in the file c.

**1. Compiler** </br>
Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c
 - Example: if the C file is main.c, the output file should be main.o

**2. Assembler** </br>
Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c
	- Example: if the C file is main.c, the output file should be main.s
