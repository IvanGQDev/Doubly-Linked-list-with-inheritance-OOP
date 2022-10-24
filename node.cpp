#include "node.h"

void Node::nodeInsert(Warrior warrior){
  Node *node = new Node();
  node->warrior = warrior;

  node->ant = this;
  node->sig = this->sig;
  this->sig = node;
  this->sig->sig->ant = node;
}

void Node::nodeDelete(){
  this->ant = this->sig;
  this->sig = this->sig->sig;
  this->sig->ant = this;
  delete this->ant;
}