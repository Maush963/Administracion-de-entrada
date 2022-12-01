#include "reloj.h"
#include "tarjeta.h"
#include <iostream>
#include <string.h>
using namespace std;
class alumno : public tarjeta {
private:
  string carrera;
  float promedio;
  int beca;
  reloj alum;

public:
  alumno() : tarjeta() {
    carrera = "IBQ";
    promedio = 90;
    beca = 5;
  };
  alumno(string carr, float prom, int bec, string mat, string nom, string cam,
         reloj al)
      : tarjeta(mat, nom, cam) {
    alum = al;
    carrera = carr;
    promedio = prom;
    beca = bec;
  };
  string getcarrera() { return carrera; };
  float getpromedio() { return promedio; };
  int getbeca() { return beca; };

  void imprimealumno() {
    imprime_tarjeta();
    cout << "Esta es la carrera que esta estudiando este alumno: " << carrera
         << endl;
    cout << "Tiempo dentro del campus: " << fixed << setprecision(2)
         << alum.getcalculahoras() << endl;
    cout << "Porcentaje de beca: " << beca << "%" << endl;
    cout << "Promedio: " << promedio << "/100" << endl;
  }
};