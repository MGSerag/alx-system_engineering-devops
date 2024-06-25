#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    const char *message_part1 = "and that piece of art is useful\" - Dora Korpar,";
    const char *message_part2 = " 2015-10-19\n";
    const char *message = message_part1 + message_part2;

    write(2, message, 59);
    return (1);
}
