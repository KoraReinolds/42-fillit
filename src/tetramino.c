#include "fillit.h"

t_point get_start_point(int x, int y) {

	struct s_point sp;

	sp.x = x;
	sp.y = y;
	
	return sp;

}

t_tetramino parse_key(char *key) {

    struct s_tetramino piece;
	
	memset(piece.size, 0, sizeof(piece.size));

	if (is_equal(key, "I")) {
		piece.height = 4;
		piece.width = 1;
		piece.size[0] = 1;
		piece.size[1] = 1;
		piece.size[2] = 1;
		piece.size[3] = 1;
		piece.start_point = get_start_point(0, 0);
	}
	
	return piece;

}