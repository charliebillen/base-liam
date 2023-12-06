#include <string.h>

static const char map[] = "Liam";

void encode(char c, char *enc)
{
    enc[0] = map[c >> 6 & 3];
    enc[1] = map[c >> 4 & 3];
    enc[2] = map[c >> 2 & 3];
    enc[3] = map[c >> 0 & 3];
}

int charIdx(char c)
{
    return strchr(map, c) - map;
}

char decode(char *c)
{
    return charIdx(c[0]) << 6 | charIdx(c[1]) << 4 | charIdx(c[2]) << 2 |
           charIdx(c[3]);
}
