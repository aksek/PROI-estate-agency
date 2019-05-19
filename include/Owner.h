/*
Project: Project2
 Author: Michal Sulek
 Grader: Wiktor Kusmirek
*/

#ifndef OWNER
#define OWNER

#include <iostream>
#include "Data.h"

class Owner : public Data
{
    public:
    std::string getInfo();
    std::string getName();
    unsigned getAge();
    void setData(std::string nameFeed = "Johnny", std::string surnameFeed = "Unknown", unsigned ageFeed = 1);
    void setData(unsigned ageFeed);
    Owner(std::string nameFeed = "Johnny", std::string surnameFeed = "Unknown", unsigned ageFeed = 1);

    private:
    std::string surname;
    std::string name;
    unsigned age;
};

#endif // OWNER
