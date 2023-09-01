#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

class Equation{
    public:
        Equation(double a, double b, double c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        double getA() { return a; }
        double getB() { return b; }
        double getC() { return c; }

        void print(){
            cout << setprecision(2) << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
        }

        double getDiscriminant(){
            return b * b - 4 * a * c;
        }

        double getRoot1(){
            return (-b + sqrt(getDiscriminant())) / (2 * a);
        }

        double getRoot2(){
            return (-b - sqrt(getDiscriminant())) / (2 * a);
        }

    private:
        double a, b, c;
};

int main()
{
    // Initialize the equation
    Equation equation(5, 2, -5);

    // Print the equation
    equation.print();

    // Check if the discriminant is positive
    if (equation.getDiscriminant() > 0){
        // The equation has two roots
        cout << "The roots are: " << equation.getRoot1() << " and " << equation.getRoot2() << endl;
    } else if (equation.getDiscriminant() == 0){
        // The equation has one root
        cout << "The root is: " << equation.getRoot1() << endl;
    } else {
        // The equation has no roots
        cout << "The equation has no roots" << endl;
    }

    return 0;
}
