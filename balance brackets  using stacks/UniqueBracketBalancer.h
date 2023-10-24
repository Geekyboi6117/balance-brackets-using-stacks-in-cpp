#ifndef UNIQUE_BRACKET_BALANCER_H
#define UNIQUE_BRACKET_BALANCER_H

#include <string>

class UniqueBracketBalancer {
private:
    std::string equation;

public:
    UniqueBracketBalancer(const std::string& eq); // Constructor
    bool IsBalanced(); // Check if brackets in the equation are balanced
};

#endif
