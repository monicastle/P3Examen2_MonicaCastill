#include "Nodo.hpp"
//#include <bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
vector<Equipo*> equipos;
void leerArchivo(string);
int main(int argc, char *argv[]){
    leerArchivo(argv[1]);
} // Fin Main

void leerArchivo(string nombre){
    string linea = "";
    fstream lector(nombre);
    Nodo* topePila;
    Nodo* nuevo;
    while (!lector.eof()){
        lector >> linea;
        char separador = ','; 
        vector<string> atributos; 
        for(int p = 0, q = 0; p != linea.npos; p = q){
                atributos.push_back(linea.substr(p + (p != 0), (q = linea.find(separador, p + 1)) - p - (p != 0)));
        } // Fin For
        string nombre;
        int partidosJugados, partidosGanados, partidosEmpatados, partidosPerdidos, golesAFavor, golesEnContra, puntaje, difGoles;
        nombre = atributos[0];
        partidosGanados = stoi(atributos[1]);
        partidosEmpatados = stoi(atributos[2]);
        partidosPerdidos = stoi(atributos[3]);
        golesAFavor = stoi(atributos[4]);
        golesEnContra = stoi(atributos[5]);
        partidosJugados = partidosGanados + partidosEmpatados + partidosPerdidos;
        difGoles = golesAFavor - golesEnContra;
        puntaje = (partidosGanados * 3) + partidosEmpatados;
        Equipo* team = new Equipo(nombre, partidosJugados, partidosGanados, partidosEmpatados, partidosPerdidos, golesAFavor, golesEnContra, difGoles, puntaje);
        topePila = nullptr;
        nuevo = new Nodo(team);
        nuevo->setNextNode(topePila);
    } // Fin While
    /*while(nuevo!=NULL){
        cout<<ptr->data<<" " ;
        ptr=ptr->next;
    }*/
    cout << nuevo->toString() << endl;
    lector.close();
} // Fin Leer Archivo

/*void selectionSort(Nodo **list) {
    if (!*list) return;
    Nodo **minadr=list,*cur=*list;
    Equipo min= (*list) -> team;
    while (cur) {
        if (cur-> team < min) {
            min = cur->team;
            minadr=&(cur->apuntador);
        }
        cur=cur->apuntador;
    }
    if (minadr!=list) {
        cur=*minadr;
        *minadr=*list;
        *list=cur;
    }
    selectionSort(&((*list)->apuntador));
}*/
/*void selectionSort(int arr[], int n)  {  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);  
    }  
}*/