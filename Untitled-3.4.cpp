#include <iostream>
using namespace std;

int main()
{

    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; 

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

// розгалуження в повній формі
    if ((y>=0 && y<=x && (x*x+y*y)<= R*R ) || (y<=0 && y>=-x && (x*x+y*y)<=R*R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    cin.get();
    return 0;
}