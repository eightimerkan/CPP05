#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("erkan", 151);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        bureaucrat.decrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}