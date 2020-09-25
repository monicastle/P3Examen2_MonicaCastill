#include "Equipo.hpp"
#include <iostream>
using namespace std;
class Nodo{
    Equipo* team;
    Nodo* apuntador;
    public:
        Nodo(){       
        } // Fin Constructor Nodo  
        Nodo(Equipo* team){
            this->team = team;
        } // Fin Constructor Nodo 
        void setNextNode(Nodo* apuntador){
            this->apuntador = apuntador;
        } // Fin Set Next Node
        ~Nodo(){
        } // Fin Destructor Nodo
}; // Fin Class Nodo