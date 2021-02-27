#include "slide_line.h"

/**
 * slide_line - slides a one-dimensional 2048 game
 *
 * @line: Pointer to the first int in the line
 * @size: The size of line
 * @direction: 0 for left, 1 for right
 *
 * Return: 1 on success, 0 on fail
 **/
int slide_line(int *line, size_t size, int direction)
{
    
    if (!line)
        return(0);

    if (direction != SLIDE_LEFT && direction !=SLIDE_RIGHT)
        return(0);
    
    

}
