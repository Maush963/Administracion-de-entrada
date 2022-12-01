#include <cmath>
#include <iomanip>
#include <iostream>
#ifndef RELOJ_H
#define RELOJ_H
using namespace std;
class reloj {
private:
  float calculahoras;
  float hora_inicial;
  float hora_final;

public:
  reloj() {
    hora_inicial = 7;
    hora_final = 15;
    calculahoras = 8;
  }
  reloj(float horin, float horfin) {

    float intPart, fractPart;
    fractPart = modf(horin, &intPart);
    hora_inicial = (fractPart * 100) + intPart * 60;

    float intP, frac;
    frac = modf(horfin, &intP);
    hora_final = (frac * 100) + intP * 60;

    float x = (hora_final - hora_inicial) / 60;
    float a, b;
    b = modf(x, &a);
    calculahoras = (b * 60 / 100) + a;
  };

  void sethora_inicial(float horin) { hora_inicial = horin; }
  void sethorafinal(float horfin) { hora_final = horfin; }

  float gethora_inicial() { return hora_inicial; };
  float gethora_final() { return hora_final; };

  float getcalculahoras() { return calculahoras; };
};

#endif /*RELOJ_H*/