//
// Created by omer on 20/12/2019.
//

#ifndef ALGORITHMICPROGRAMMINGPROJECT__PRINT_H_
#define ALGORITHMICPROGRAMMINGPROJECT__PRINT_H_

#include <string>
#include <utility>
#include <iostream>
#include "Command.h"
#include "SymbolTable.h"

using namespace std;

class Print : public Command {

    SymbolTable *symTable;

public:
    explicit Print(SymbolTable *symbolTable) : symTable(symbolTable) {}

    /** Prints a message (at it+1)
     *
     * @param it pointer to "Print" token.
     * @return how many tokens to jump.
     */
    int execute(list<string>::iterator it) override {
        ++it;
        if (it->front() == '"' && it->back() == '"') {
            it->pop_back();
            it->erase(0, 1);
            cout << *it << endl;
        } else {
            cout << this->symTable->getVariable(*it) << endl;
        }
        return 2;
    }
};

#endif //ALGORITHMICPROGRAMMINGPROJECT__PRINT_H_
