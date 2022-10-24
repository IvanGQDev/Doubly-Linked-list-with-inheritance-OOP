#ifndef LISTA_H
#define LISTA_H
#include "node.h"

class Lista{
  private:
  Node head;
  Node tail;

  public:
  Lista(){head.sig = &tail, tail.ant = &head;}
  ~Lista();

  void frontInsert(Warrior);
  void backInsert(Warrior);
  void frontDelete();
  void backDelete();
  void print();
};

#endif