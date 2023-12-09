#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "test.h"

#include "../src/encoder.h"

/*
    'A' == 65 == 01000001

    01000001 == 01 00 00 01 == i L L i

    'A' == "iLLi"
*/

const char raw = 'A';
const char *encoded = "iLLi";

void test_encode()
{
    char act[5] = {'\0'}; // string literals are null-terminated

    encode(raw, act);

    TEST("test_encode", STR_EQ(act, encoded));
}

void test_decode()
{
    char act = decode(encoded);

    TEST("test_decode", EQ(act, raw));
}

int main()
{
    test_encode();
    test_decode();

    return 0;
}
