# Project: 0x0E. C - Structures, typedef </br>
## Resources</br>
[struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))</br>
[Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)</br>
[typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)</br>
[The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/)</br>

## Tasks </br>

#### 0. Poppy </br> 
- Define a new type struct dog with the following elements:
	- name, type = char *
	- age, type = float
	- owner, type = char *

#### 1. A dog is the only thing on earth that loves you more than you love yourself </br>
- Write a function that initialize a variable of type struct dog
	- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

#### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad </br> 
- Write a function that prints a struct dog
	- Prototype: void print_dog(struct dog *d);
	- Format: see example bellow
	- You are allowed to use the standard library
	- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
	- If d is NULL print nothing.

#### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read </br>
- Define a new type dog_t as a new name for the type struct dog.

#### 4. A door is what a dog is perpetually on the wrong side of
- Write a function that creates a new dog
	- Prototype: dog_t *new_dog(char *name, float age, char *owner);
	- You have to store a copy of name and owner
	- Return NULL if the function fails

