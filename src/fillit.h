#ifndef FILLIT_H
#define FILLIT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef	struct	s_map
{
	int	size;
	int	*array;
}				t_map;

typedef	struct	s_point
{
	int	x;
	int	y;
}				t_point;

typedef	struct	s_tetramino
{
	int			size[4];
	t_point		*start_point;
	int			width;
	int			height;
	char		draw_char;
}				t_tetramino;

int       		word_count 	(char *str, char c);
int       		split      	(const char *input, const char *delimiter, char **result);
t_map			create_map	(int size);
void			free_map	(t_map *map);
void			print_map	(t_map *map);
t_tetramino		parse_key	(char *key);
int				is_equal	(char *s1, char *s2);
t_point			*get_point	(int x, int y);
int				can_set		(t_map *map, t_tetramino *piece, t_point *start);
void			place_piece	(t_map *map, t_tetramino *piece, t_point *start);
int				min_size	(t_tetramino *tetraminos, int num_tetraminos);

#endif