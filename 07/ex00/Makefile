CLANG = c++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98
DEBUG = -g -fsanitize=address
HEADERS = whatever.hpp
FILES = main.cpp
OBJ_DIR = obj/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.opp))
NAME = whatever

all: $(OBJ_DIR) $(NAME)

debug: FLAGS += $(DEBUG)
debug: $(OBJ_DIR) $(NAME)

d: debug

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_FILES) $(HEADERS)
	$(CLANG) $(FLAGS) $(OBJ_FILES) -o $(NAME)

$(OBJ_DIR)%.opp: %.cpp $(HEADERS)
	$(CLANG) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all debug clean fclean re
