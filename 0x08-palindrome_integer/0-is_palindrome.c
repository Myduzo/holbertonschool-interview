#include "palindrome.h"

/**
 * is_palindrome - function that checks whether or not a given unsigned integer is a palindrome.
 *
 * @n: the number to be checked.
 *
 * Return: 1 if n is a palindrome, and 0 otherwise.
 */
int is_palindrome(unsigned long n)
{
    unsigned int copy = n, rem, rev = 0;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return (rev == copy);
}
