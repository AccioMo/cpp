CLANG = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ_DIR = obj/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.opp))
NAME = MoarBrainz

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

.PHONY: all clean fclean re
