#include <iostream>
using namespace std;

float Suma(float A, float B) {
  return A + B;
}

float Promediar(float Val, int Cant) {
  return (Val / Cant);
}

int main() {
  float A = 0; float T = 0;
  int n;
  cout << "Cuantas materias?"; cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Calificacion de la materia " << (i + 1) << "?"; cin >> A;
    T = Suma(T, A);
  }
  cout << "El promedio es: " << Promediar(T, n) << endl;
  return 0;
}
