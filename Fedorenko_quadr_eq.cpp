#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float a,b,c, d, x1, x2;
    cout << "Quadratic equation formula is a*x^2 + b*x + c = 0.\nEnter a, b, c: ";
    cin >> a >> b >> c;
    d = sqrt(pow(b,2) - 4*a*c);
    cout << "D = "<< d << endl;
    if ( d > 0)
    {
        x1 = ((-b + d)/(2*a));
        x2 = ((-b - d)/(2*a));
        cout << "Two roots found:\n";
        cout << "x_1 ="<< x1 << endl;
        cout << "x_2 ="<< x2 << endl;
        return 0;
    }
    else if ( d == 0)
    {
        x1 = (-b/(2*a));
        cout <<"Single root found:\n"<< "x = " << x1 << endl;
        return 0;
    }
    else  
    {
        cout << "Equation's roots are complex";
        return 0;
    }

}