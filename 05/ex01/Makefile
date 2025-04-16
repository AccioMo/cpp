CLANG = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
DEBUG = -g -fsanitize=address
HEADERS = Bureaucrat.hpp
FILES = main.cpp Bureaucrat.cpp
OBJ_DIR = obj/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.opp))
NAME = Bureaucrat

all: FLAGS += $(DEBUG)
all: $(OBJ_DIR) $(NAME)

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

fcelan: fclean

re: fclean all

.PHONY: all clean fclean re
