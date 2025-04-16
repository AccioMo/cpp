
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>

int	main(void) {

	try {

		std::cout << "--- started ---" << std::endl;
		Bureaucrat	intern1("intern1", 1);
		std::cout << intern1 << std::endl;
		Bureaucrat	intern2("intern2", 149);
		std::cout << intern2 << std::endl;
		
		Form		form1("form1", 149, 149);
		std::cout << form1 << std::endl;
		Form		form2("form2", 100, 100);
		std::cout << form2 << std::endl;
		Form		form3("form3", 1, 1);
		std::cout << form1 << std::endl;

		intern1.signForm(form1);
		intern2.signForm(form1);

		intern1.signForm(form2);
		intern2.signForm(form2);

		intern1.signForm(form3);
		intern2.signForm(form3);

		std::cout << "--- done! ---" << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
