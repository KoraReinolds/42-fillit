#include "fillit.h"

int main(int argc, char** argv) {
    const char *delimiter = " ";

    if (argc == 2) {
        char *substrings[word_count(argv[1], delimiter[0])];
        
        printf("%d\n", split(argv[1], delimiter, substrings));
    }

    return 0;
}