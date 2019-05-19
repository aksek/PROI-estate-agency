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
        void SetparcelArea(unsigned int val) { parcelArea = val; }
        //std::string getInfo();
    protected:
    private:
        unsigned int parcelArea;
};

#endif // DETACHED_H
