/**
 * _strlen - length of string
 * @str: parameter
 * Return: length of string
 */
ssize_t _strlen(const char *str)
{
	int len = 0, count = 0;

	while (str[len] !=  '\0')
	{
		count++;
		len++;
	}

	return (len);
}
