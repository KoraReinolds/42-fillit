#include "fillit.h"

int split(const char *input, const char *delimiter, char **result) {
    char *str = strdup(input);

    if (!str) {
        return -1;
    }

    int count = 0;
    char *token = strtok(str, delimiter);

    while (token != NULL) {
        result[count++] = token;
        token = strtok(NULL, delimiter);
    }

    return count;
}