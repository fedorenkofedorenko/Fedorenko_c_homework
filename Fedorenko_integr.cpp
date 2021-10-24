#include <iostream>
#include <cmath>

using namespace std;


float f_x (float x)
{
    float y = pow(x,2) + 4;
    return y;
}
float trap_integral(float upper, float lower, float n)
{   float integration = 0.0;
    float step_size =  ((upper - lower)/n);
    float integ_val = (f_x(lower) + f_x(upper));
    if (int i=1; i<= (n-1), i++)
    {
        float k = lower + i*step_size;
        float integration = integration + 2*f_x(k);
    }
    integration = integration * step_size/2;
    return integration;
}

float simpson_integral(float upper, float lower, float n)
{
    float integration=0.0, stepSize, k;
    int i, subInterval;
    stepSize = (upper - lower)/subInterval;
    integration = f_x(lower) + f_x(upper);
    for(i=1; i<= subInterval-1; i++)
    {
        k = lower + i*stepSize;

        if(i%2==0)
        {
            integration = integration + 2 * (f_x(k));
        }
    else
    {
        integration = integration + 4 * (f_x(k));
    }
    }
    integration = integration * stepSize/3;
    return integration;

}

long monte_carlo(float upper,float lower,float upper_y, float lower_y)
{
    int count;
    float total, in;
    for (count=0; count < 100000000; count++)
    {
    float u1 = (float)rand()/(float)RAND_MAX;
    float u2 = (float)rand()/(float)RAND_MAX;

    float xc = ((upper - lower)*u1) + lower;
    float yc = ((upper_y - lower_y)*u2) + lower;
    float val = f_x(xc);

    total++;

    if (val > yc){
      in++;
    }
  }

  float density = in/total;

  return (upper - lower)*(upper_y - lower_y)*density;
}



int main()
{
    float trapezoid, simpson,m_c, lower, upper,upper_y ,lower_y, n;
    cout << "f(x) = x^2 + 4\n";
    cout << "Enter x integration limits:";
    cin >> upper >> lower;
    cout << "Enter y integration limits:";
    cin >> upper_y >> lower_y;
    cout << "Enter subintervals number:";
    cin >> n;
    trapezoid = trap_integral(upper,lower,n);
    simpson  = simpson_integral(upper,lower,n);
    m_c = monte_carlo(upper,lower,upper_y,lower_y);
    cout << "TRapezoidal integration value = "<< trapezoid<<endl;
    cout << "Simpson integration value = "<< simpson<< endl;
    cout << "Monte Carlo integration value = " << m_c <<endl;
    return 1;
}
