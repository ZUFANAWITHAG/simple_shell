#include "shell.h"

/**
 **_strncpy - a string copier
 *@dest: destination string to be copied to
 *@src: source string
 *@n: the amount of characters to be copied
 *Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h, m;
	char *s = dest;

	h = 0;
	while (src[h] != '\0' && h < n - 1)
	{
		dest[h] = src[h];
		h++;
	}
	if (h < n)
	{
		m = h;
		while (m < n)
		{
			dest[m] = '\0';
			m++;
		}
	}
	return (s);
}

/**
 **_strncat - two strings concatenator
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int h, m;
	char *s = dest;

	h = 0;
	m = 0;
	while (dest[h] != '\0')
		h++;
	while (src[m] != '\0' && m < n)
	{
		dest[h] = src[m];
		h++;
		m++;
	}
	if (h < n)
		dest[h] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
