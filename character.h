#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Character{
  private:
    std::string name;
    std::string t_class;
    int hp;
    int sp;
  
  public:
    Character(){this->name = "",this->t_class = "",this->hp = 0, this->sp = 0;}
    ~Character(){}

    void setName(std::string name){this->name = name;}
    std::string getName(){return this->name;}

    void setT_class(std::string t_class){this->t_class = t_class;}
    std::string getT_class(){return this->t_class;}

    void setHp(int hp){this->hp = hp;}
    int getHp(){return this->hp;}

    void setSp(int sp){this->sp = sp;}
    int getSp(){return this->sp;}

    virtual void setData();
    virtual std::string getData();


};

#endif