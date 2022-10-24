#include <iostream>
#include "node.h"
#include "lista.h"

int main(){
  Lista lista;
  Warrior *warrior = new Warrior();

  warrior->setData();
  lista.frontInsert(*warrior);
  warrior->setData();
  lista.frontInsert(*warrior);
  warrior->setData();
  lista.frontInsert(*warrior);
  lista.print();
  lista.~Lista();
  lista.print();
  warrior->setData();
  lista.frontInsert(*warrior);
  lista.print();
  system("Pause");
  

  


  return 0;
}