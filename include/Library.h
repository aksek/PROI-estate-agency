/*
Project: Project2
 Author: Michal Sulek
 Grader: Wiktor Kusmirek
 ///////////////////////
Modified for:
 Project: Project3
  Author: Aniela Kosek
*/

#ifndef LIBRARY
#define LIBRARY

#include <iostream>
#include <vector>
#include <string>
#include "Estate.h"
#include "Owner.h"

class Library
{
    public:
        Library();
        ~Library();
        void add(Estate<unsigned> estateFeed);
        std::vector<std::string> showEstates();
        void add(Owner estateFeed);
        std::vector<std::string> showOwners();

    private:
        std::vector<Estate<unsigned>> *estates;
        std::vector<Owner> *owners;
};

#endif // LIBRARY
