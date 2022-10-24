#ifndef WARRIOR_H
#define WARRIOR_H
#include "character.h"

class Warrior : public Character{
  private: 
    int ad;
    std::string weapon;
    std::string armor;
  
  public: 
    Warrior(){this->ad = 0, this->weapon = "", this->armor = "";}
    ~Warrior(){}

    void setAd(int ad){this->ad = ad;}
    int getAd(){return this->ad;}

    void setWeapon(std::string weapon){this->weapon = weapon;}
    std::string getWeapon(){return this->weapon;}

    void setArmor(std::string armor){this->armor = armor;}
    std::string getArmor(){return this->armor;}

    void setData();
    std::string getData();
    



};

#endif