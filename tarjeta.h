#include <string.h>
#include <cmath>
#include <iostream>
#include <iomanip>
#ifndef TARJETA_H
#define TARJETA_H
using namespace std;

class tarjeta {
private:
string matricula;
string nombre;
string campus;
float calculahoras;
float hora_inicial;
float hora_final; 
string muestradatos[50];
  
public:

tarjeta(){
  matricula = "A01710308";
  nombre = "Mauricio Salas";
  campus = "Querétaro";
  hora_inicial = 7;
  hora_final = 15;
  calculahoras = 8;
  
};

tarjeta(string mat, string nom, string cam,float horin, float horfin, float calhor){
matricula = mat;
nombre = nom;
campus = cam;

float intPart, fractPart;
fractPart = modf(horin, &intPart);

hora_inicial = fractPart+intPart*60;
  
  float intPartd, fractPartd;
	fractPartd = modf(horfin, &intPartd);

hora_final = fractPartd+intPartd*60;
  
float x = (hora_final - hora_inicial)/60;
  float intPar, fractPar;
	fractPar = modf(x, &intPar);
calculahoras = (fractPar*60)+intPar;
calhor =calculahoras;
};


string getmatricula (){
  return matricula;
};

string getnombre (){
  return nombre;
};
string getcampus (){
  return campus;
};
float getcalculahoras (){
  return calculahoras;
};
float gethora_inicial (){
  return hora_inicial;
};
float gethora_final (){
  return hora_final;
};

float calor(){
return calculahoras;
};

void imprime_tarjeta(){
cout<<"Nombre: "<<nombre<<endl;
cout<<"Matrícula: "<<matricula<<endl;
cout<<"Campus: "<<campus<<endl;
cout<<"Horas dentro del campus (horas.minutos): "<<fixed<<setprecision(2)<<calculahoras<<endl;
}

};
#endif /*TARJETA_H*/
