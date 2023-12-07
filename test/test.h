#define TEST(name, test)                                                      \
    do                                                                        \
    {                                                                         \
        if ((test))                                                           \
        {                                                                     \
            printf("%s passed\n", name);                                      \
            return;                                                           \
        }                                                                     \
        fprintf(stderr, "%s failed\n", name);                                 \
        exit(-1);                                                             \
    } while (0)

#define STR_EQ(s1, s2) (strcmp(s1, s2) == 0)

#define EQ(i, j) (i == j)
