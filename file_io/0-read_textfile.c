#include "main.h"

/**
 * read_text - function that read a text file and prints it
 * @filename: input name of file to read text from
 * @letters: input number of bytes expected to read and print
 *
 *Return: number of bytes 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t s1, s2;
    char *buffer = malloc(sizeof(char) * letters);

    if (filename == NULL || buffer == NULL)
    {
        return (0);
    }

    fd = open(filename, O_RDONLY);

    if (fd == -1)
    {
        return (0);
    }

    s1 = read(fd, buffer, letters);
    buffer[s1] = '\0';

    s2 = write(STDOUT_FILENO, buffer, s1);
    free(buffer);

    if (close(fd) < 0)
    {
        return (0);
    }
    return (s2);
}
