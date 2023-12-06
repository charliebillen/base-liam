#include <unistd.h>

#include "encoder.h"

int main()
{
    char c;
    while (read(STDIN_FILENO, &c, 1))
    {
        char enc[4];
        encode(c, enc);
        write(STDOUT_FILENO, enc, 4);
    }

    return 0;
}
