#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний аргумент45
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
// розгалуження в повній формі
    if (x<-6-R)
        y = 0;
    else
        if (-6-R<=x && x<-6)
            y = - sqrt(R*R-((x+6)*(x+6)));
    else
        if (-6<=x && x<-R)
            y = (R*R+R*x)/(-R+6);
        else
            if (-R<=x && x<0)
                y = sqrt(R*R-x*x);
        else
            if (0<=x && 3>x)
                y = R+(-R*x)/3;
            else 
                if (3<=x && 9>x)
                    y= (R*x-3*R)/6;
                    
    cout << endl;
    
    cout << "y = " << y << endl;
    
    cin.get();
    return 0;
}