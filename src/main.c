#include <stdio.h>
#include "fillit.h"

int main(int argc, char** argv) {
    char del = ' ';

    if (argc == 2) {
        printf("%d\n", word_count(argv[1], del));
    }

    return 0;
}