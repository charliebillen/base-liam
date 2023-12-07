#include <stdlib.h>
#include <unistd.h>

#include "encoder.h"

int main()
{
    char c;
    while (read(STDIN_FILENO, &c, ASCII_CHAR))
    {
        char enc[LIAM_CHAR];
        encode(c, enc);
        write(STDOUT_FILENO, enc, LIAM_CHAR);
    }

    return EXIT_SUCCESS;
}
