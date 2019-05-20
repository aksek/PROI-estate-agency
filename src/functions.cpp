/*
Project: Project2
 Author: Michal Sulek
 Grader: Wiktor Kusmirek
 ///////////////////////
 Modified for:
Project: Project3
     By: Aniela Kosek
*/

#include <iostream>
#include "functions.h"

using namespace std;

Owner operator+ (Owner person, unsigned number)
{
    person.setData(person.getAge() + number);
    return person;
}

void increaseAge(Data* info, unsigned number)
{
    info->setData(info->getAge() + number);
}


void print(std::string s){std::cout << s << std::endl;}
