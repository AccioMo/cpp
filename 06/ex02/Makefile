CLANG = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
DEBUG = -g -fsanitize=address
HEADERS = Base.hpp A.hpp B.hpp C.hpp
FILES = main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJ_DIR = obj/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.opp))
NAME = typeinfo

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

fcelan: fclean
fclena: fclean

re: fclean all

.PHONY: all clean fclean re
