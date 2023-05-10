#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
   int horas = 0, minutos = 0, segundos = 0, milisegundos = 0;

   while (true) {
      cout << horas << ":" << minutos << ":" << segundos << ":" << milisegundos << endl;
      milisegundos++;
      if (milisegundos == 1000) {
         milisegundos = 0;
         segundos++;
         if (segundos == 60) {
            segundos = 0;
            minutos++;
            if (minutos == 60) {
               minutos = 0;
               horas++;
            }
         }
      }
      this_thread::sleep_for(chrono::milliseconds(1));
   }

   return 0;
}
