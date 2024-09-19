/**
  * _strspn - Gets the length of a prefix substring.
  * @s: The string to be scanned.
  * @accept: The string containing the characters to match.
  *
  * Return: The number of characters in the initial segment of s which consist
  *					only of characters from accept.
  */
unsigned int	_strspn(char *s, char *accept)
{
	int	i;
	int	j;
	int	found;

	j = 0;
	while (s[j])
	{
		found = 0;
		i = 0;
		while (accept[i])
		{
			if (accept[i] == s[j])
			{
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
			break;
		j++;
	}
	return (j);
}

