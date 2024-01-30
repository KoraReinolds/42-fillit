#include "fillit.h"

int main(int argc, char** argv) {
    const char *delimiter = " ";

    if (argc == 2) {
        int words_count = word_count(argv[1], delimiter[0]); 
        char *substrings[words_count];
        
        split(argv[1], delimiter, substrings);

        for (int i = 0; i < words_count; i++) {
            printf("%s\n", substrings[i]);
        }

        struct s_map map = create_map(54); 
        free_map(&map);
    }

    return 0;
}