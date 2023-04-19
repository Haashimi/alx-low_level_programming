# Project: 0x0F. C - Function pointers </br>

## Resources </br>

[Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
[Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
[Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
[why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
[Everything you need to know about pointers in C](https://boredzo.org/pointers/)

## Tasks </br>

### 0. What's my name </br>
- Write a function that prints a name.
	- Prototype: void print_name(char *name, void (*f)(char *));

### 1. If you spend too much time thinking about a thing, you'll never get it done </br>
- Write a function that executes a function given as a parameter on each element of an array.
	- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
	- where size is the size of the array
	- and action is a pointer to the function you need to use

