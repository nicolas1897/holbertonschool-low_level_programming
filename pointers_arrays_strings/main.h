#ifndef MAIN_H
#define MAIN_H



/**

 * _putchar - puts character to standard output

 * @c: character to put to standard output

 */



int _putchar(char c);





/**

 * reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98

 * @n: pointer to int n

 */



void reset_to_98(int *n);



/**

 * swap_int - swaps the values of two integers

 * @a: integer to swap

 * @b: integer to swap

 */



void swap_int(int *a, int *b);



/**

 * main - returns the length of a string

 * @s: string

 */



int _strlen(char *s);



/**

 * _puts - prints a string, followed by a new line, to stdout

 * @str: string to print

 */



void _puts(char *str);



/**

 * print_rev - prints a string, in reverse, followed by a new line

 * @s: string to reverse

 */



void print_rev(char *s);



/**

 * print_rev - reverses a string

 * @s: string to reverse

 */



void rev_string(char *s);



/**

 * puts2 - prints every second character of a string, followed by a new line

 * @str: string to print

 */



void puts2(char *str);



/**

 * puts_half - prints half of a string, followed by a new line

 * @str: string to print

 */



void puts_half(char *str);



/**

 * print_array - prints n elements of an array of integers, followed by a new line

 * @a: array

 * @n: number of elements

 */



void print_array(int *a, int n);



/**

 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0),

 * to the buffer pointed to by dest

 * @dest: copy source to this buffer

 * @src: this is the source to copy

 */



char *_strcpy(char *dest, char *src);



/**

 * _atoi - convert string to int

 * @s: string to convert

 * Return: integer

 */



int _atoi(char *s);



/**

 * _putchar - puts character to standard output

 * @c: character to put to standard output

 */



int _putchar(char c);



/**

 * _strcat - concatenate two strings

 * @dest: string to be appended to

 * @src: string to append

 * Return: concatenated string

 */



char *_strcat(char *dest, char *src);



/**

 * _strcat - concatenate n bytes to destination string

 * @dest: string to be appended to

 * @src: string to append

 * @n: append n number of bytes(chars)

 * Return: concatenated string

 */



char *_strncat(char *dest, char *src, int n);



/**

 * _strncpy - copies n bytes of a source into buffer of a destination string,

 * @dest: copy source to this buffer

 * @src: this is the source to copy

 * @n: n bytes to be copied

 * Return: copied string

 */



char *_strncpy(char *dest, char *src, int n);



/**

 * _strcmp - compare two strings

 * @s1: one string

 * @s2: one string

 * Return: int that tells num spaces in between

 */



int _strcmp(char *s1, char *s2);



/**

 * reverse_array - reverse array elements

 * @a: array

 * @n: number of elements in array

 */



void reverse_array(int *a, int n);



/**

 * string_toupper - capitalize all letters in string

 * @s: string to manipulate

 * Return: string with all letters capitalized

 */



char *string_toupper(char *);



/**

 * string_toupper - capitalize first letter of all words

 * @s: string to manipulate

 * Return: string

 */



char *cap_string(char *s);



/**

 * rot13 - encode string using rot13

 * @s: string to encode

 * Return: encoded string

 */



char *rot13(char *s);



/**

 * leet - encode string into 1337 leet

 * @s: string to manipulate

 * Return: string

 */



char *leet(char *s);



/**

 * print_number - print an integer, without using long, arrays, or pointers

 * @n: number to be printed

 */



void print_number(int n);



#endif
