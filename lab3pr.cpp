#include  <iostream> 
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double A;
    double B;

    cout << "x= "; cin >> x;

    A=1+9*x;

    if (x<0)
        B = sin(x);
    else
        if (x>1)
            B = cos(x);
        else
            B = exp(x);

    y = A + B;
    
    cout << "2) y = " << y << endl;

    return 0;
}