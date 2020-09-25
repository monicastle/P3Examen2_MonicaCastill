#include "Equipo.hpp"
#include <iostream>
using namespace std;
class Nodo{
    public:
        Equipo* team;
        Nodo* apuntador;
        Nodo(){       
        } // Fin Constructor Nodo  
        Nodo(Equipo* team){
            this->team = team;
        } // Fin Constructor Nodo 
        void setNextNode(Nodo* apuntador){
            this->apuntador = apuntador;
        } // Fin Set Next Node
        string toString() {
            return "" + team->toString();
        } // Fin To String
        ~Nodo(){
        } // Fin Destructor Nodo
}; // Fin Class Nodo