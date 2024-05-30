#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * strtow - Fuction that splits a string into words
  * @str: The string to be splited.
  *
  * Return: Pointer to an array of strings or NULL if str == NULL or str == "".
  */
char **strtow(char *str)
{
	char **words;
	char *word_start;
	int i, j, k, word_length, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		word_start = &str[k];
		word_length = 0;

		while (str[k] != ' ' && str[k] != '\0')
		{
			word_length++;
			k++;
		}

		words[i] = (char *)malloc((word_length + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_length; j++)
			words[i][j] = word_start[j];
		words[i][word_length] = '\0';
	}

	words[word_count] = NULL;
	return (words);
}

/**
  * count_words - Helper function to count the number of words in a string.
  * @str: The string to evaluate.
  *
  * Return: Number of words in the string.
  */
int count_words(char *str)
{
	int in_word = 0, word_count = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		str++;
	}
	return (word_count);
}
