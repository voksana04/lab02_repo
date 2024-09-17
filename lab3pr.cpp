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

    if (x<=0)
        B = log(fabs(sin(x)))+pow(x, 7);
    
    if (x>0 && x<=3)
        B = cos((abs(x+1))/2)/sin((abs(x+1))/2) ;
        
    if (x>3)
        B = 3*x-pow(x, 5);

    y = A + B;
    
    cout << "1) y = " << y << endl;

    if (x<=0)
        B = log(fabs(sin(x)))+pow(x, 7);
    else
        if (x>0 && x<=3)
            B = cos((abs(x+1))/2)/sin((abs(x+1))/2);
        else
            B = 3*x-pow(x, 5);
    
    y = A + B;
    
    cout << "2) y = " << y << endl;
    
    cin.get();
    return 0;
}