#include "character.h"

void Character::setData(){
  std::string name;
  std::string t_class;
  int hp;
  int sp;

  fflush(stdin);
  std::cout<<"Enter Name: ";
  getline(std::cin, name);
  this->name = name;
  std::cout<<"Enter Class: ";
  getline(std::cin, t_class);
  this->t_class = t_class;
  std::cout<<"Enter HP: ";
  std::cin>>hp;
  this->hp = hp;
  std::cout<<"Enter SP: ";
  std::cin>>sp;
  this->sp = sp;
}

std::string Character::getData(){
  return "\nName: "+this->name+"\nClass: "+this->t_class+"\nHP: "+std::to_string(this->hp)+"  SP: "+std::to_string(this->sp);
}