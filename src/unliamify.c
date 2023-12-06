#include <unistd.h>

#include "encoder.h"

int main()
{
    char enc[4];
    while (read(STDIN_FILENO, &enc, 4))
    {
        char c = decode(enc);
        write(STDOUT_FILENO, &c, 1);
    }

    return 0;
}
