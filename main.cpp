#include <iostream>
#include "tarjeta.h"
#include "alumno.h"
using namespace std;
#include "profesor.h"

 int main(){
float horin, horfin, calor;
   int band,lol;
   string compare_matricula;
cout<<"Bienvenido, en este menu podra ver la información de alumnos, \nprofesores y personal de mantenimiento \n";
   cout<<"Eliga (1) para alumno,(2) para profesor y (3) para personal de mantenimiento: ";
   cin>>band;

if (band == 1){
  alumno *agenda = new alumno [10];
  cout<<"Ver la información de un alumno (1) o crear el perfil de un alumno (2):";cin>>lol;
  if (lol==1){
  cout<<"Digite la hora en la que ingreso (horas.minutos): ";cin>>horin;
  cout<<"Digite la hora en la que salio (horas.minutos): ";cin>>horfin;
alumno primero ("ITC",98,80,"A0192837","el terror sanchez","Querétaro",horin,horfin,4.62);
alumno segundo ("IRS",72,10,"A01710309","fredesquizofrenico","Hidalgo",horin,horfin,7.5);

agenda[0]=primero;
agenda[1]=segundo;


    cout<<"Digite la matricula del alumno: ";cin>>compare_matricula;
  for (int i=0;i<10;i++){
    if(agenda[i].getmatricula()==compare_matricula){
      cout<<"\n\nEsta es la información del alumno: \n\n";
      agenda[i].imprimealumno();
    }
  }
    }}
if (lol==0){
  string carr;cout<<"Digite su carrera: ";cin>>carr;
  float prom;cout<<"Digite su promedio: ";cin>>prom;
  int bec;cout<<"Digite el porcentaje de su beca: ";cin>>bec;
  string mat;cout<<"Digite su matrícula: ";cin>>mat;
  string nom;cout<<"Digite su nombre: ";cin>>nom;
  string cam;cout<<"Digite su campus: ";cin>>cam;
  float horin;cout<<"Digite la hora en la que ingreso (horas.minutos): ";cin>>horin;
  float horfin; cout<<"Digite la hora en la que salio (horas.minutos): ";cin>>horfin;
  alumno tercero(carr,prom,bec,mat,nom,cam,horin,horfin,0);
  }
else if (band == 2){
 profesor *lista = new profesor [10];
  cout<<"Ver la información de un profesor (1) o crear el perfil de un profesor (2):";cin>>lol;
  if (lol==1){
  cout<<"Digite la hora en la que ingreso (horas.minutos): ";cin>>horin;
  cout<<"Digite la hora en la que salio (horas.minutos): ";cin>>horfin;
profesor prim (12,"f9180","Morfología","L328","Jose Luis","Monterrey",horin,horfin,1,5980.2);
profesor seg (400,"g502","Aritmética","L123","Mustafar","Guadalajara",horin,horfin,1,24192.3);
    lista[0]=prim;
    lista[1]=seg;
cout<<"Digite la matricula del profesor: ";cin>>compare_matricula;
  for (int i=0;i<10;i++){
    if(lista[i].getmatricula()==compare_matricula){
      cout<<"\n\nEsta es la información del profesor: \n\n";
      lista[i].imprimeprofesor();
    }
    }
  

  }
  //profesor(float sal, string grup, string mater, string mat, string nom, string cam, float horin, float horfin, float calhor, float salariototal) : tarjeta (mat, nom, cam, horin, horfin, calhor){

  }
else if (band == 3){}


   return 0;
 }
