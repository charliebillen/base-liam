#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "encoder.h"

#define BUFF_LEN LIAM_CHAR + 1 // for the '\0'

static inline void clear(char *buff)
{
    memset(buff, 0, BUFF_LEN);
}

int main()
{
    char enc[BUFF_LEN];
    clear(enc);

    while (read(STDIN_FILENO, &enc, LIAM_CHAR))
    {
        char c = decode(enc);
        write(STDOUT_FILENO, &c, ASCII_CHAR);
        clear(enc);
    }

    return EXIT_SUCCESS;
}
