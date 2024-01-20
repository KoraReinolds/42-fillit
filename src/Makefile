include files.mk

# CmpFlags = -Wall -Wextra -Werror

Compiler = gcc

OUTN = fillit
OUTPUT_DIR = ./gcc

CFILES = $(files:%=%.c)
OFILES = $(files:%=$(OUTPUT_DIR)/%.o)
NAME = $(OUTN)

$(NAME): $(OFILES)
	@$(Compiler) $(CmpFlags) $(OFILES) -o $(NAME)

$(OUTPUT_DIR)/%.o: %.c
	@mkdir -p $(OUTPUT_DIR)
	@$(Compiler) $(CmpFlags) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re