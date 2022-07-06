#include "main.h"
/**
 * _isalpha - checks if the letter is upper case or lower case
 * @c: character to check
 * Return: 0 or 1
*/
int _isalpha(int c)
{
	return ((c >= 97 && c <= 127) || (c >= 65 && c <= 90));
}
