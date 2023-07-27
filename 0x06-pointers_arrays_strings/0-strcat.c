#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

int main()
{
	char a[] = "hello";
	char b[] = "world";
	char *ptr;
	ptr = strcat(a,b);
	printf("%s",ptr);
	return(0);
}


