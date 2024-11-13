CLANG = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
HEADERS = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp DiamondTrap.hpp
FILES = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp DiamondTrap.cpp
OBJ_DIR = obj/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.opp))
NAME = DiamondTrap

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_FILES) $(HEADERS)
	$(CLANG) $(FLAGS) $(OBJ_FILES) -o $(NAME)

$(OBJ_DIR)%.opp: %.cpp $(HEADERS)
	$(CLANG) $(FLAGS) -c $< -o $@

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJ_FILES)

re: fclean all

.PHONY: all clean fclean re
