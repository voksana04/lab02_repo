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

    A=x*x

    if (x<0) 
        B = sin(x);
    if (0<=x && x<=1)
        B = exp(x);
    if (x>1)
        B = cos(x);
    
    y = A + B;

    cout << endl;
    cout << "1) y = "<< y << endl;

    cin.get();
    return 0;
}