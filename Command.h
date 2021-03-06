//
// Created by omer on 19/12/2019.
//

#ifndef ALGORITHMICPROGRAMMINGPROJECT__COMMAND_H_
#define ALGORITHMICPROGRAMMINGPROJECT__COMMAND_H_

#include <list>
#include <string>

using namespace std;

class Command {
public:
    virtual ~Command() {}

    virtual int execute(list<string>::iterator) = 0;
};

#endif //ALGORITHMICPROGRAMMINGPROJECT__COMMAND_H_
