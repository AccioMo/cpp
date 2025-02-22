
# include "Bureaucrat.hpp"
# include <iostream>

int	main(void) {

	try {

		Bureaucrat	intern1("oopma", 1);
		Bureaucrat	intern2("loompa", 149);

		std::cout << intern1 << std::endl;
		std::cout << intern2 << std::endl;

		intern2.decrementGrade();
		intern2.decrementGrade();
		intern1.incrementGrade();

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
