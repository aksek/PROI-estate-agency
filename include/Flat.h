/*
 Project: Project3
  Author: Aniela Kosek, 300234
  Grader: Wiktor Kusmirek
*/

#ifndef FLAT_H
#define FLAT_H

#include <Estate.h>

class Flat : public Estate<unsigned> {
    public:
        Flat();
        virtual ~Flat();
        short int Getfloor() { return floor; }
        void Setfloor(short int val) { floor = val; }
    protected:
    private:
        short int floor;
};

#endif // FLAT_H
