#include "warrior.h"

void Warrior::setData(){
  int ad;
  std::string weapon;
  std::string armor;

  std::cout<<"WARRIOR"<<std::endl;
  Character::setData();
  fflush(stdin);
  std::cout<<"Enter Weapon: ";
  getline(std::cin, weapon);
  this->weapon = weapon;
  std::cout<<"Enter Armor: ";
  getline(std::cin, armor);
  this->armor = armor;
  std::cout<<"Enter AD: ";
  std::cin>>ad;
  this->ad = ad;

}

std::string Warrior::getData(){
  return Character::getData()+"\nWeapon: "+this->weapon+"  AD: "+std::to_string(this->ad)+"\nArmor: "+this->armor;
}