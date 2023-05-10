#include <iostream>
using namespace std;

int main() {
   int num1, num2, num3, num4;

   cout << "Ingrese el primer número: ";
   cin >> num1;

   cout << "Ingrese el segundo número: ";
   cin >> num2;

   cout << "Ingrese el tercer número: ";
   cin >> num3;

   cout << "Ingrese el cuarto número: ";
   cin >> num4;

   // Ordenamiento de los números
   int temp;
   if (num1 > num2) {
      temp = num1;
      num1 = num2;
      num2 = temp;
   }

   if (num2 > num3) {
      temp = num2;
      num2 = num3;
      num3 = temp;
   }

   if (num3 > num4) {
      temp = num3;
      num3 = num4;
      num4 = temp;
   }

   if (num1 > num2) {
      temp = num1;
      num1 = num2;
      num2 = temp;
   }

   if (num2 > num3) {
      temp = num2;
      num2 = num3;
      num3 = temp;
   }

   if (num1 > num2) {
      temp = num1;
      num1 = num2;
      num2 = temp;
   }

   // Mostrando los números ordenados
   cout << "Los números ordenados son: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

   return 0;
}
