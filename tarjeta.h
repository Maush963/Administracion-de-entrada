#include <cmath>
#include <iomanip>
#include <iostream>
#include <string.h>
#ifndef TARJETA_H
#define TARJETA_H
using namespace std;

class tarjeta {
private:
  string matricula;
  string nombre;
  string campus;

public:
  tarjeta() {
    matricula = "A01710308";
    nombre = "Mauricio Salas";
    campus = "Querétaro";
  };

  tarjeta(string mat, string nom, string cam) {
    matricula = mat;
    nombre = nom;
    campus = cam;
  };

  string getmatricula() { return matricula; };

  string getnombre() { return nombre; };
  string getcampus() { return campus; };

  void imprime_tarjeta() {
    cout << "Nombre: " << nombre << endl;
    cout << "Matrícula: " << matricula << endl;
    cout << "Campus: " << campus << endl;
  }
};
#endif /*TARJETA_H*/
