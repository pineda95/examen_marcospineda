#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <queue>
using namespace std;


//Devuelve el ultimo numero de mi_lista (dado)
list<int>::iterator getUltimo(list<int> mi_lista)
{
    list<int>::iterator i = mi_lista.begin();
    while(i!=mi_lista.end())
    {
        i++;
    }
      i--;
    return i;
}

//Devuelve true si todos los numero de mi_set (dado) son pares
bool sonPares(set<int> mi_set)
{
  for(set<int>::iterator it = mi_set.begin(); it!= mi_set.end(); it++)
      {
    if(*it==mi_set.begin()%2=0)
     {
         return true;
     }
}

    return false;


}
//Devuelve un set que contenga unicamente los numeros de mi_pila (dado)
set<int> convertirASet(queue<int> mi_pila)
{
    set<int> mi_set;
    return mi_set;
}

//Devuelve una lista que contenga unicamente los numeros presentes en agenda (dado) asociados con la llave nombre (dado)
list<int> obtenerNumeros(multimap<string,int> agenda, string nombre)
{
    list<int>numeros;
    return numeros;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
