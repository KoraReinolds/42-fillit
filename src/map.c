#include "fillit.h"

t_map create_map(int size) {
    struct s_map map;
    map.size = size;
    map.array = (char **)malloc(size * sizeof(char *));
    
    for (int i = 0; i < size; ++i) {
        map.array[i] = (char *)malloc(size * sizeof(char));
    }
    return map;
}

void free_map(t_map *map) {
    for (int i = 0; i < map->size; ++i) {
        free(map->array[i]);
    }
    free(map->array);
}
