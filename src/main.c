#include "fillit.h"

int main(int argc, char** argv) {
    const char *delimiter = " ";

    if (argc == 2) {
        int words_count = word_count(argv[1], delimiter[0]); 
        char *substrings[words_count];
        
        split(argv[1], delimiter, substrings);

        struct s_tetramino pieces[words_count];

        for (int i = 0; i < words_count; i++) {
            pieces[i] = parse_key(substrings[i]);
        }

        for (int i = 0; i < words_count; i++) {
            printf("Piece %d: %s\n", i + 1, substrings[i]);
        }

        struct s_map map = create_map(5);
        struct s_point *point = get_point(0, 0);

        if (can_set(&map, &pieces[0], point) == 1) {
            place_piece(&map, &pieces[0], point);
        }

        if (can_set(&map, &pieces[1], point) == 1) {
            place_piece(&map, &pieces[1], point);
        }

        print_map(&map);
        free_map(&map);
    }

    return 0;
}
