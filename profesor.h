#include "reloj.h"
#include "tarjeta.h"
#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;

class profesor : public tarjeta {
private:
  float salariototal;
  float salario;
  string grupos;
  string materia;
  reloj primero;

public:
  profesor() : tarjeta() {
    salariototal = 9900;
    salario = 93.5;
    grupos = "f342, f320 ,g502";
    materia = "programación";
  };

  profesor(float sal, string grup, string mater, string mat, string nom,
           string cam, float saltot, reloj prim)
      : tarjeta(mat, nom, cam) {
    float calhor;
    primero = prim;
    calhor = primero.getcalculahoras();
    salario = calhor * 540;
    salariototal = saltot + salario;
    grupos = grup;
    materia = mater;
  };
  float getsalario() { return salario; };
  string getgrupos() { return grupos; };
  string getarea() { return materia; };

  void imprimeprofesor() {
    imprime_tarjeta();
    cout << "Grupos del profesor: " << grupos << endl;
    cout << "Materia que imparte: " << materia << endl;
    cout << "Tiempo dentro del campus: " << fixed << setprecision(2)
         << primero.getcalculahoras() << endl;
    cout << "Este es el salario por hora del día de hoy : " << salario << endl;
    cout << "Este es su salario total: " << salariototal << endl;
  };
};
