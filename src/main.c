#include "fillit.h"

int main(int argc, char** argv) {
    const char *delimiter = " ";

    if (argc == 2) {
        int words_count = word_count(argv[1], delimiter[0]); 
        char *substrings[words_count];
        
        split(argv[1], delimiter, substrings);

        struct s_tetramino piece = parse_key("L-270");

        for (int i = 0; i < words_count; i++) {
            printf("%s\n", substrings[i]);
        }

        struct s_map map = create_map(5);
        struct s_point *point = get_point(2, 1);
        if (can_set(&map, &piece, point) == 1) {
            place_piece(&map, &piece, point);
        }
        print_map(&map);
        free_map(&map);
    }

    return 0;
}