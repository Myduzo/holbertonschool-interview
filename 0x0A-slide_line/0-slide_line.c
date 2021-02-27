#include "slide_line.h"
/**
 * slide_line - function that slides and merges an array of integers
 * @line: Pointer to the first int in the line
 * @size: The size of line
 * @direction: 0 for left, 1 for right
 * Return: 1 on success, 0 on fail
 **/
int slide_line(int *line, size_t size, int direction)
{
	int *idx;
	int *left;
	int *right;

	if (!line)
		return (0);
	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (direction == SLIDE_LEFT)
	{
		idx = line;
		for (left = idx; left < line + (size - 1); left++)
		{
			while (*left == 0)
				left++;
			right = left + 1;
			while (right < line + (size))
			{
				if (*right == *left)
				{
					*idx = *left * 2;
					if (idx != left)
						*left = 0;
					*right = 0;
					idx++;
					break;
				}
					else
						right++;
			}
		}
		if (*(line + size - 1) && !*idx)
		{
			*idx = *(line + size - 1);
			*(line + size - 1) = 0;
		}
	}
	return (1);
}
