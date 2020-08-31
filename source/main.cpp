#include "stack.hpp"

#include <fstream>
#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::ifstream in(argv[0]);
    Stack textlines;
    std::string line;

    while(getline(in, line))
        textlines.push(new std::string(line));

    std::string *s;

    while ((s = (std::string *)textlines.pop()) != 0)
    {
        std::cout << *s << std::endl;
        delete s;
    }

}
