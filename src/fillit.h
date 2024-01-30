#ifndef FILLIT_H
#define FILLIT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct  s_map
{
	int			size;
	int			*array;
}								t_map;

int       word_count  (char *str, char c);
int       split       (const char *input, const char *delimiter, char **result);
t_map			create_map	(int size);
void			free_map		(t_map *map);
void			print_map		(t_map *map);

#endif