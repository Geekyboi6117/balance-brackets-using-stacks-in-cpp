#include <iostream>
#include "UniqueBracketBalancer.h"

int main() {
    std::string equation;

    // Prompt the user to enter an equation
    std::cout << "Enter an equation with brackets: ";
    std::getline(std::cin, equation);

    UniqueBracketBalancer bracketBalancer(equation);

    if (bracketBalancer.IsBalanced()) {
        std::cout << "Brackets are balanced in the equation.\n";
    }
    else {
        std::cout << "Brackets are not balanced in the equation.\n";
    }

    return 0;
}
