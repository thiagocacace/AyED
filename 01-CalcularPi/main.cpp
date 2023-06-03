#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
  int n{};
  int itre{};
  double res{};

  while (itre < 1000000)
  {
    int op = 1;
    res += (((pow(-1, n)) / ((2 * n) + 1)) * 4);

    n++;
    itre++;
  }

  cout << "El valor de pi es: ";
  cout << fixed << setprecision(6);
  cout << res << endl;

  return 0;
}
