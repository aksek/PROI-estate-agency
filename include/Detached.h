/*
 Project: Project3
  Author: Aniela Kosek, 300234
  Grader: Wiktor Kusmirek
*/

#ifndef DETACHED_H
#define DETACHED_H

#include <Estate.h>


class Detached : public Estate<unsigned>
{
    public:
        Detached();
        virtual ~Detached();
        unsigned int GetparcelArea() { return parcelArea; }
        void SetparcelArea(unsigned int val) { parcelArea = val; }
    protected:
    private:
        unsigned int parcelArea;
};

#endif // DETACHED_H
