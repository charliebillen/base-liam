#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "encoder.h"

static const char map[] = "Liam";

void encode(const char c, char *enc)
{
    enc[0] = map[c >> 6 & 3];
    enc[1] = map[c >> 4 & 3];
    enc[2] = map[c >> 2 & 3];
    enc[3] = map[c >> 0 & 3];
}

static inline int charIdx(const char c)
{
    char *p = strchr(map, c);

    if (p == NULL)
    {
        fprintf(stderr, "Invalid character: %c\n", c);
        exit(EXIT_FAILURE);
    }

    return p - map;
}

char decode(const char *c)
{
    char len = strlen(c);
    if (len != LIAM_CHAR)
    {
        fprintf(stderr, "Invalid input: %s Length: %u\n", c, len);
        exit(EXIT_FAILURE);
    }

    return charIdx(c[0]) << 6 | charIdx(c[1]) << 4 | charIdx(c[2]) << 2 |
           charIdx(c[3]);
}
