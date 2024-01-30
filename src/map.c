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

void	print_map(t_map *map)
{
	int i = 0;
	int j = 0;

	while (i < map->size) {
		int val = map->array[i];
		j = 0;
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