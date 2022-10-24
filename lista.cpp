#include "lista.h"

Lista::~Lista(){
  Node *aux = new Node();
  aux = head.sig;
  while(head.sig != &tail){
    head.nodeDelete();
    aux = aux->sig;
  }
}

void Lista::frontInsert(Warrior warrior){
  head.nodeInsert(warrior);
}

void Lista::backInsert(Warrior warrior){
  tail.ant->nodeInsert(warrior);
}

void Lista::frontDelete(){
  if(head.sig == &tail){
    std::cout<<"Empty"<<std::endl;
  }else
    head.nodeDelete();
  
}

void Lista::backDelete(){
  if(head.sig == &tail){
    std::cout<<"Empty"<<std::endl;
  }else
    tail.ant->ant->nodeDelete();
}

void Lista::print(){
  Node *aux  = head.sig;
  while(aux != &tail){
    std::cout<<aux->warrior.getData()<<std::endl;
    aux = aux->sig;
  }
}