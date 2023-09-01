#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double a, b, c;
  cout << "Enter the equation of the line: ";
  cin >> a >> b >> c;

  double m = -b / a;

  if (m == 0) {
    cout << "The point of inflection is (0, " << c << ")." << endl;
  } else {
    double x = -c / b;
    double y = a * x + c;
    cout << "The point of inflection is (" << x << ", " << y << ")." << endl;
  }

  return 0;
}
