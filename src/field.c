#include "fillit.h"

t_map create_map(int size) {
	struct s_map map;

  	map.size = size;
  	map.array = (int *)malloc(size * sizeof(int));
    
  	return map;
}

void free_map(t_map *map) {
	free(map->array);
}

int	can_set(t_map *map, t_tetramino *piece, t_point *start) {
	if (
		(start->x + piece->width - piece->start_point->x <= map->size) &&
		(start->y + piece->height - piece->start_point->y <= map->size)
	) return 1;
	else return 0;
}

void    place_piece(t_map *map, t_tetramino *piece, t_point *start) {
	for (int i = 0; i < piece->height; i++) {
        int j = i + start->y;
		map->array[j] = map->array[j] | (piece->size[i] << start->x);
	}
}

void	print_map(t_map *map)
{
	int i = 0;
	int j = 0;

	while (i < map->size) {
		int val = map->array[i];
		j = 0;
        printf("%d ", i);
		while (j < map->size) {
			if (val & 1) {
				printf("%c", '#');
			} else {
				printf("%c", '.');
			}
			val >>= 1;
			j++;
		}
		printf("\n");
		i++;
	}
}