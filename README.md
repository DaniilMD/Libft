# Libft  
## Project objective
Create a library of useful functions that will be convenient to use in most of C projects.  
## Skills to acquire and use
•	Fundamentals of C  
•	Algorithm elaboration  
•	Imperative programming  
• Understanding standard C functions and learning to use them  
## How to run it? (works on Linux and MacOS)
•	git clone https://github.com/DaniilMD/Libft.git «Folder name»  
•	cd «Folder name»  
•	make  
•	Create a .c file that uses libft functions (using #include "way/to/libft.h/libft.h" ofc)  
•	Compile this file like this:  
```
gcc file_using_libft_funcs.c -L "way/to/libft.a" -lft
```
#### Try it out
Use the presented "test.c" file:  

![Screenshot from 2020-08-11 20-16-17](https://user-images.githubusercontent.com/48802453/89928233-32e9ec00-dc10-11ea-9d8d-2ad40075a786.png) 

Compile and run it:

![Screenshot from 2020-08-11 20-19-55](https://user-images.githubusercontent.com/48802453/89928241-341b1900-dc10-11ea-9621-bd3257a6d893.png)

## What does it do?
Makefile builds the libft library using all the .c files in the repository.
## How it works
1) Firstly, object files are created using gcc:
```
@gcc -Wall -Wextra -Werror -I . -c $< -o $@
```
2) Then the library is assembled
```
@ar rc $(NAME) $(OBJ)
```
## Project evaluation result  
### Score 124/100  
Mandatory part  
100/100  

Bonus part  
24/25  
