#ifndef NODE_H
#define NODE_H
#include "warrior.h"

class Node{
  private:
  Node *ant;
  Node *sig;
  Warrior warrior;

  public:
  Node(){}
  ~Node(){}

  void nodeInsert(Warrior);
  void nodeDelete();

  friend class Lista;

};

#endif