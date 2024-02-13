#include "fillit.h"

t_point *get_point(int x, int y) {

    t_point *p = malloc(sizeof(t_point));

    if (p != NULL) {
        p->x = x;
        p->y = y;
    }

    return p;

}

t_tetramino parse_key(char *key) {

  struct s_tetramino piece;
	
	memset(piece.size, 0, sizeof(piece.size));

	if (is_equal(key, "I-0")) {
		piece.height = 4;
		piece.width = 1;
		piece.size[0] = 1;
		piece.size[1] = 1;
		piece.size[2] = 1;
		piece.size[3] = 1;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "I-180")) {
		piece.height = 1;
		piece.width = 4;
		piece.size[0] = 15;
		piece.size[1] = 0;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "J-0")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 2;
		piece.size[1] = 2;
		piece.size[2] = 3;
		piece.size[3] = 0;
		piece.start_point = get_point(1, 0);
	} else if (is_equal(key, "J-90")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 4;
		piece.size[1] = 7;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(2, 0);
	} else if (is_equal(key, "J-180")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 1;
		piece.size[1] = 1;
		piece.size[2] = 3;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "J-270")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 7;
		piece.size[1] = 1;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "L-0")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 1;
		piece.size[1] = 1;
		piece.size[2] = 3;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "L-90")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 7;
		piece.size[1] = 1;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "L-180")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 3;
		piece.size[1] = 2;
		piece.size[2] = 2;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "L-270")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 4;
		piece.size[1] = 7;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(2, 0);
	} else if (is_equal(key, "Z-0")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 3;
		piece.size[1] = 6;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "Z-90")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 2;
		piece.size[1] = 3;
		piece.size[2] = 1;
		piece.size[3] = 0;
		piece.start_point = get_point(1, 0);
} else if (is_equal(key, "Z-180")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 6;
		piece.size[1] = 3;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(1, 0);
	} else if (is_equal(key, "Z-270")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 1;
		piece.size[1] = 3;
		piece.size[2] = 2;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "T-0")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 7;
		piece.size[1] = 2;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "T-90")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 2;
		piece.size[1] = 3;
		piece.size[2] = 2;
		piece.size[3] = 0;
		piece.start_point = get_point(1, 0);
} else if (is_equal(key, "T-180")) {
		piece.height = 2;
		piece.width = 3;
		piece.size[0] = 2;
		piece.size[1] = 7;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(1, 0);
	} else if (is_equal(key, "T-270")) {
		piece.height = 3;
		piece.width = 2;
		piece.size[0] = 1;
		piece.size[1] = 3;
		piece.size[2] = 1;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	} else if (is_equal(key, "S-0")) {
		piece.height = 2;
		piece.width = 2;
		piece.size[0] = 3;
		piece.size[1] = 3;
		piece.size[2] = 0;
		piece.size[3] = 0;
		piece.start_point = get_point(0, 0);
	}
	
	return piece;

}

int min_size(t_tetramino *tetraminos, int num_tetraminos) {
    int total_size = num_tetraminos * 4;

    int max_tetramino_dimension = 0;
    for (int i = 0; i < num_tetraminos; i++) {
        int max_dimension = tetraminos[i].width > tetraminos[i].height ? tetraminos[i].width : tetraminos[i].height;
        if (max_dimension > max_tetramino_dimension) {
            max_tetramino_dimension = max_dimension;
        }
    }

    int min_size = 2;
    while (min_size * min_size < total_size || min_size < max_tetramino_dimension) {
        min_size++;
    }

    return min_size;
}