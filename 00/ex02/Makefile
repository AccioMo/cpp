CLANG = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Account.hpp
FILES = Account.cpp tests.cpp
NAME = GlobalBankstersRecovery

all: $(NAME)

$(NAME): $(FILES) $(HEADERS)
	$(CLANG) $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)
