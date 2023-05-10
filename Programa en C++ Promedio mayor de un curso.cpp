#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
   cout << "Ingrese la cantidad de estudiantes: ";
   cin >> n;

   vector<double> promedios(n);
   double mayor_promedio = 0;

   for (int i = 0; i < n; i++) {
      int nota1, nota2, nota3;
      cout << "Ingrese las notas del estudiante " << i + 1 << ":" << endl;
      cout << "Nota 1: ";
      cin >> nota1;
      cout << "Nota 2: ";
      cin >> nota2;
      cout << "Nota 3: ";
      cin >> nota3;

      double promedio = (nota1 + nota2 + nota3) / 3.0;
      promedios[i] = promedio;

      if (promedio > mayor_promedio) {
         mayor_promedio = promedio;
      }
   }

   cout << "El promedio mayor es: " << mayor_promedio << endl;
   cout << "Los estudiantes con el promedio mayor son: ";

   for (int i = 0; i < n; i++) {
      if (promedios[i] == mayor_promedio) {
         cout << i + 1 << " ";
      }
   }
   cout << endl;

   return 0;
}
