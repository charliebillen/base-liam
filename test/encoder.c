#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/encoder.h"

/*
    'A' == 65 == 01000001

    01000001 == 01 00 00 01 == i L L i
*/
#define ASCII 'A'
#define LIAM "iLLi"

int test_encode()
{
    char enc[5] = {'\0'};
    encode(ASCII, enc);

    if (strcmp(enc, LIAM) != 0)
    {
        fprintf(stderr, "test_encode failed\n");
        fprintf(stderr, "\tgot '%s'\n", enc);
        fprintf(stderr, "\texpected '%s'\n", LIAM);
        return -1;
    }

    printf("test_encode passed\n");
    return 1;
}

int test_decode()
{
    char enc[] = LIAM;
    char c = decode(enc);

    if (c != ASCII)
    {
        fprintf(stderr, "test_decode failed\n");
        fprintf(stderr, "\tgot '%c'\n", c);
        fprintf(stderr, "\texpected '%c'\n", ASCII);
        return -1;
    }

    printf("test_decode passed\n");
    return 1;
}

int main()
{
    if (!test_encode())
    {
        return -1;
    }

    if (!test_decode())
    {
        return -1;
    }

    return 0;
}
