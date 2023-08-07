#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - Prints an array of string
 * @str: The array to print
 *
 * Return: nothing
 */

char **strtow(char *str)
{
int num_words;
char **word_array;
int word_count;
int in_word;
char *word_start;
int word_length;
int i;
int word_length;

 
if (str == NULL || *str == '\0')
{
return (NULL);
}
num_words = count_words(str);
word_array = (char **)malloc((num_words + 1) * sizeof(char *));
if (word_array == NULL)
{
return (NULL);
}
word_count = 0;
in_word = 0;
word_start = NULL;
while (*str)
{
if (is_space(*str))
{
if (in_word)
{
word_length = str - word_start;
word_array[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
if (word_array[word_count] == NULL)
{
for (i = 0; i < word_count; i++)
{
free(word_array[i]);
}
free(word_array);
return (NULL);
}
strncpy(word_array[word_count], word_start, word_length);
word_array[word_count][word_length] = '\0';
word_count++;
in_word = 0;
}
}
else
{
if (!in_word)
{
in_word = 1;
word_start = str;
}
}
str++;
}
if (in_word)
{
word_length = str - word_start;
word_array[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
if (word_array[word_count] == NULL)
{
for ( i = 0; i < word_count; i++)
{
free(word_array[i]);
}
free(word_array);
return (NULL);
}
strncpy(word_array[word_count], word_start, word_length);
word_array[word_count][word_length] = '\0';
word_count++;
}
word_array[word_count] = NULL;
return (word_array);
}
