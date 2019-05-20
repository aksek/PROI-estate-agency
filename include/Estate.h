/*
Project: Project2
 Author: Michal Sulek
 Grader: Wiktor Kusmirek
 ///////////////////////
 Modified for:
Project: Project3
     By: Aniela Kosek
*/

#ifndef ESTATE
#define ESTATE

#include <iostream>
#include <string>
#include <stdexcept>
#include "Owner.h"
#include "Data.h"

template <typename priceType>
class Estate : public Data
{
    private:
    std::string name;
    std::string district;
    unsigned age;
    priceType price;
    Owner *owner;

    public:
    std::string getInfo();
    unsigned getAge() {return age;}
    void setData(std::string nameFeed, std::string districtFeed, unsigned ageFeed, int price = 0, Owner *ownerFeed = 0);
    void setData(unsigned ageFeed) {age = ageFeed;}
    void discount(priceType amount);
   // Estate() : name("Unknown"), district("Unknown"), age(0) {}
   // Estate(std::string name, std::string district, unsigned age, int price = 0, Owner *owner = 0) : name(name), district(district), age(age), price(price), owner(owner) {}
};

template <typename priceType>
std::string Estate<priceType>::getInfo()
{
    return name + " distr:" + district + " age:" + std::to_string(age) + " price:" + std::to_string(price) + " owner:" + owner->getName();
}

template <typename priceType>
void Estate<priceType>::setData(std::string name, std::string district, unsigned age, int price, Owner *owner)
{
    this->name = name;
    this->district = district;
    this->age = age;
    this->price = price;
    this->owner = owner;
}

template <typename priceType>
void Estate<priceType>::discount(priceType amount) {
    try {
        if (amount > price)
            throw std::logic_error("negative price exception");
        price -= amount;
    }
    catch (std::logic_error) {
        std::cerr << "Error: Price cannot be negative (requested price: " << (long long)price - amount << ")\n";
    }
}

#endif // ESTATE
