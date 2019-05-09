#include <iostream>
#include "functions.h"

using namespace std;

Owner operator+ (Owner person, unsigned number)
{
    person.setData(person.getAge() + number);
    return person;
}


void print(std::string s){std::cout << s << std::endl;}
