#include "tarjeta.h"
#include <string.h>
#include <iostream>
using namespace std;
class alumno: public tarjeta{
private:
string carrera;
float promedio;
int beca;
public:
alumno() : tarjeta (){
  carrera = "IBQ";
  promedio = 90;
  beca = 5;
};
alumno(string carr, float prom, int bec, string mat, string nom, string cam, float horin, float horfin, float calhor) : tarjeta (mat, nom, cam, horin, horfin, calhor){
  carrera = carr;
  promedio = prom;
  beca = bec;
};
string getcarrera (){
  return carrera;
};
float getpromedio (){
  return promedio;
};
int getbeca (){
  return beca;
};

void imprimealumno(){
imprime_tarjeta();
cout<<"Esta es la carrera que esta estudiando este alumno: "<<carrera<<endl;
cout<<"Porcentaje de beca: "<<beca<<"%"<<endl;
cout<<"Promedio: "<<promedio<<"/100"<<endl;
}

};