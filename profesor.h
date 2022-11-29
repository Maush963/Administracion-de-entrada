#include "tarjeta.h"
#include <string.h>
#include <iostream>
using namespace std;
class profesor: public tarjeta{
private:
float salariototal;
float salario;
string grupos;
string materia;
public:
profesor() : tarjeta (){
  salariototal = 9900;
  salario = 93.5;
  grupos = "f342, f320 ,g502";
  materia = "programación";
};

profesor(float sal, string grup, string mater, string mat, string nom, string cam, float horin, float horfin, float calhor, float salariototal) : tarjeta (mat, nom, cam, horin, horfin, calhor){
  calhor = calor();
  salario = calhor*540;
  salariototal += salario;
  grupos = grup;
  materia = mater;
};
float getsalario (){
  return salario;
};
string getgrupos (){
  return grupos;
};
string getarea (){
  return materia;
};

void imprimeprofesor(){
imprime_tarjeta();
cout<<"Grupos del profesor: "<<grupos<<endl;
cout<<"Materia que imparte: "<<materia<<endl;
cout<<"Este es el salario por hora del día de hoy : "<<salario<<endl;
cout<<"Este es su salario total: "<<salariototal;
  };
};
