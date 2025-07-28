#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: pointer to the buffer
 * @src: pointer to a sting
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}

	return(dest);
}
