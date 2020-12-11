#include <iostream>
#include <math.h>
#include "main.h"

using std::cin;
using std::cout;


inline double f(double x) {
  return sqrt(sin(x));
}


double integrateTrap(double start, double stop, int divs) {
  double h, i, ans = 0;

  h = (stop - start) / divs;
  for (i = start; i < stop; i += h)
    ans += 0.5 * (f(i) + f(i + h)) * h;
  return ans;
}


int main() {
    int divs;
    double start, stop;

    cout << "Enter Range Start: ";
    cin >> start;
    cout << "Enter Range Stop: ";
    cin >> stop;
    cout << "Enter number of divisions: ";
    cin >> divs;
    cout << "\nResult of Integration = " << integrateTrap(start, stop, divs) << "\n\n";
    return 0;
}
