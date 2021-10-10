#include <iostream>
#include <cmath>

using namespace std;

int factorial(int x)
{
    if (x>1)
    {
        return x*factorial(x-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int x;
    long long res;
    cout << "Enter a positive number:";
    cin >> x;
    res = factorial(x);
    cout << x << "! = "<< res;
}