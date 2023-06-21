#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& other) {
    std::copy(other.ideas, other.ideas + 100, ideas);
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        std::copy(other.ideas, other.ideas + 100, ideas);
    }
    std::cout << "Brain assignment operator called." << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called." << std::endl;
}