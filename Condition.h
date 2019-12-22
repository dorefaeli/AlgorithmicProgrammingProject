//
// Created by Dor Refaeli on 22/12/2019.
//

#ifndef ALGORITHMICPROGRAMMINGPROJECT_CONDITION_H
#define ALGORITHMICPROGRAMMINGPROJECT_CONDITION_H


#include "Expression.h"

class Condition {
    string left;
    string sign;
    string right;
    Interpreter *interpreter;

public:
    Condition(string str);
    void setVariables(string str);
    bool getState() const;
};


#endif //ALGORITHMICPROGRAMMINGPROJECT_CONDITION_H