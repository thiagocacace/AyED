#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
  int n{};
  int itre{};
  double res = 0;
  double verificacion = 0.0000001;
  double anterior_res{};

  while (itre < 100000000)
  {
    res += (((pow(-1, n)) / ((2 * n) + 1)) * 4); // Formula de Leibniz
    n++;
    itre++;

    if (abs(res - anterior_res) < verificacion) // Verificar si alcanzó la precisión deseada
    {
      break;
    }
    else
    {
      anterior_res = res;
    }
  }

  res = floor(res * 1000000) / 1000000; // Sirve para eliminar todos los decimales que vienen despues del sexto, para que luego de imprimir no se redondeen

  cout << "\nEl valor de pi es: " << fixed << setprecision(6) << res << endl;

  return 0;
}
