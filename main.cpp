#include "alumno.h"
#include <cmath>
#include <iostream>
using namespace std;
#include "profesor.h"
#include "reloj.h"

int main() {
  float horin, horfin, calor;
  int band;
  string compare_matricula;
  cout << "Bienvenido, en este menu podra ver la información de alumnos, "
          "\nprofesores y personal de mantenimiento \n";
  cout
      << "Eliga (1) para alumno, (2) para profesor y (3) para salir del menu: ";
  cin >> band;
  while (band > 3 || band < 1) {
    cout << "Este valor no es valido, digítelo nuevamente: ";
    cin >> band;
  }
  while (band != 3) {
    if (band == 1) {
      alumno *agenda = new alumno[10];
      cout << "Digite la hora en la que ingreso (horas.minutos): ";
      cin >> horin;
      cout << "Digite la hora en la que salio (horas.minutos): ";
      cin >> horfin;
      reloj hours(horin, horfin);
      alumno primero("ITC", 98, 80, "A0192837", "el terror sanchez",
                     "Querétaro", hours);
      alumno segundo("IRS", 72, 10, "A01710309", "edson pantera", "Hidalgo",
                     hours);

      agenda[0] = primero;
      agenda[1] = segundo;

      cout << "\nCasos de prueba: A0192837, A01710309" << endl
           << "Digite la matricula del alumno: ";
      cin >> compare_matricula;
      for (int i = 0; i < 10; i++) {
        if (agenda[i].getmatricula() == compare_matricula) {
          cout << "\n\nEsta es la información del alumno: \n\n";
          agenda[i].imprimealumno();
        }
      }
    }

    else if (band == 2) {
      profesor *lista = new profesor[10];
      cout << "Digite la hora en la que ingreso (horas.minutos): ";
      cin >> horin;
      cout << "Digite la hora en la que salio (horas.minutos): ";
      cin >> horfin;
      reloj horario(horin, horfin);
      profesor prim(12, "f9180", "Morfología", "L328", "Jose Luis", "Monterrey",
                    18000, horario);
      profesor seg(400, "g502", "Aritmética", "L123", "Mustafar", "Guadalajara",
                   23000, horario);
      lista[0] = prim;
      lista[1] = seg;
      cout << "\nCasos de prueba: L328, L123" << endl
           << "Digite la matricula del profesor: ";
      cin >> compare_matricula;
      for (int i = 0; i < 10; i++) {
        if (lista[i].getmatricula() == compare_matricula) {
          cout << "\n\nEsta es la información del profesor: \n\n";
          lista[i].imprimeprofesor();
        }
      }
    }
    cout << "\n¿Desea hacer otra acción? Si(1) No(2): ";
    cin >> band;
    if (band == 2) {
      band = 3;
      cout << "Hasta la Próxima";
    }
    if (band == 1) {
      cout << "Eliga (1) para alumno, (2) para profesor: ";
      cin >> band;
    }
  }
  return 0;
}