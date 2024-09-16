// Lab_02.cpp
// < Вишинська Оксана >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Pi = 4 * atan(1.);

    double a;
    double z1;
    //double z2;

    cout << "a= "; cin>>a;

    z1=2*( sin((3*4*atan(1.))-2*a) * sin((3*4*atan(1.))-2*a) ) * ( cos((5*4*atan(1.))+2*a) * cos ((5*4*atan(1.))+2*a) );
   // z2=1.0/4 - 1.0/4 * sin(5.0/2*(4*atan(1.0))-8*a);

    cout<<endl;
    cout<<"z1= "<<z1<<endl;
   // cout<<"z2= "<<z2<<endl;

    cin.get();
    return 0;

}