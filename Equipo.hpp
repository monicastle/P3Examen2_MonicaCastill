#include <iostream>
#include <string>
using namespace std;
class Equipo{
    string nombre;
    int partidosJugados, partidosGanados, partidosEmpatados, partidosPerdidos, golesAFavor, golesEnContra, difGoles, puntaje;
    public:
        Equipo(){           
        } // Fin Constructor Equipo
        Equipo(string nombre, int partidosJugados, int partidosGanados, int partidosEmpatados, int partidosPerdidos, int golesAFavor, int golesEnContra, int difGoles, int puntaje){
            this->nombre = nombre;
            this->partidosJugados = partidosJugados;
            this->partidosGanados = partidosGanados;
            this->partidosEmpatados = partidosEmpatados;
            this->partidosPerdidos = partidosPerdidos;
            this->golesAFavor = golesAFavor;
            this->golesEnContra = golesEnContra;
            this->difGoles = difGoles;
            this->puntaje = puntaje;
        } // Fin Constructor Equipo
        string getNombre(){
            return nombre;
        } // Fin Get Nombre
        void setNombre(string nombre){
            this->nombre = nombre; 
        } // Fin Set Nombre
        int getPartidosJugados(){
            return partidosJugados;
        } // Fin Get Partidos Jugados
        void setPartidosJugados(int partidosJugados){
            this->partidosJugados = partidosJugados; 
        } // Fin Set Partidos Jugados
        int getPartidosGanados(){
            return partidosGanados;
        } // Fin Get Partidos Ganados
        void setPartidosGanados(int partidosGanados){
            this->partidosGanados = partidosGanados;
        } // Fin Set Partidos Ganados
        int getPartidosEmpatados(){
            return partidosEmpatados;
        } // Fin Get Partidos Empatados
        void setPartidosEmpatados(int partidosEmpatados){
            this->partidosEmpatados = partidosEmpatados;
        } // Fin Set Partidos Empatados
        int getPartidosPerdidos(){
            return partidosPerdidos;
        } // Fin Get Partidos Perdidos
        void setPartidosPerdidos(int partidosPerdidos){
            this->partidosPerdidos = partidosPerdidos;
        } // Fin Set Partidos Perdidos
        int getGolesAFavor(){
            return golesAFavor;
        } // Fin Get Goles a Favor
        void setGolesAFavor(int golesAFavor){
            this->golesAFavor = golesAFavor;
        } // Fin Set Goles a Favor
        int getGolesEnContra(){
            return golesEnContra;
        } // Fin Get Goles en Contra
        void setGolesEnContra(int golesEnContra){
            this->golesEnContra = golesEnContra;
        } // Fin Set Goles en Contra
        int getDifGoles(){
            return difGoles;
        } // Fin Get Goles en Contra
        void setDifGoles(int difGoles){
            this->difGoles = difGoles;
        } // Fin Set Goles en Contra
        int getPuntaje(){
            return puntaje;
        } // Fin Get Goles en Contra
        void setPuntaje(int puntaje){
            this->puntaje = puntaje;
        } // Fin Set Goles en Contra
        string toString() {
            return "" + nombre + "," + to_string(partidosJugados) + "," + to_string(puntaje);
        } // Fin To String
        ~Equipo(){
        } // Fin Destructor Equipo
}; // Fin Class Equipo