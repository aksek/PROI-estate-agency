/*
Project: Project2
 Author: Michal Sulek
 Grader: Wiktor Kusmirek
 ///////////////////////
Modified for:
 Project: Project3
  Author: Aniela Kosek
*/

#include <iostream>
#include <string>
#include <vector>
#include "Library.h"
#include "functions.h"

using namespace std;

Library::Library()
{
    try {
        estates = new vector<Estate<unsigned>>;
        owners = new vector<Owner>;
    }
    catch (bad_alloc& ba) {
        cerr << "bad alloc caught: " << ba.what() << '\n';
    }
}

Library::~Library()
{
    delete(estates);
    delete(owners);
}

void Library::add(Estate<unsigned> estateFeed)
{
    try {
        estates->push_back(estateFeed);
    }
    catch (bad_alloc& ba) {
        cerr << "bad alloc caught: " << ba.what() << '\n';
    }
}

vector<string> Library::showEstates()
{
    vector<string> output;
    for(vector<Estate<unsigned>>::iterator i = estates->begin(); i != estates->end(); ++i)
    {
        try {
            output.push_back(i->getInfo());
        }
        catch (bad_alloc& ba) {
            cerr << "bad alloc caught: " << ba.what() << '\n';
        }
    }
    return output;
}

void Library::add(Owner ownerFeed)
{
    try {
        owners->push_back(ownerFeed);
    }
    catch (bad_alloc& ba) {
        cerr << "bad alloc caught: " << ba.what() << '\n';
    }
}

vector<string> Library::showOwners()
{
    vector<string> output;
    for(vector<Owner>::iterator i = owners->begin(); i != owners->end(); ++i)
    {
        try {
            output.push_back(i->getInfo());
        }
        catch (bad_alloc& ba) {
            cerr << "bad alloc caught: " << ba.what() << '\n';
        }
    }
    return output;
}

