CLANG = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
DEBUG = -g -fsanitize=address
HEADERS = RPN.hpp
FILES = main.cpp RPN.cpp
OBJ_DIR = obj/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.opp))
NAME = RPN

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
