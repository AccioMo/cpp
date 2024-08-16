CLANG = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = PhoneBook.hpp Contact.hpp utils.hpp
FILES = PhoneBook.cpp Contact.cpp utils.cpp main.cpp
NAME = thePhoneBook

all: $(NAME)

$(NAME): $(FILES) $(HEADERS)
	$(CLANG) $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)
