#include <iostream>
#include <math.h>



using namespace std;




float delta (float a, float b, float c)
{
return -b*4*a*c;
}



void raizes (float a, float b, float c, float *x1, float *x2)
{
float dt=delta(a,b,c);
if (dt>=0)
{
*x1=(-b+sqrt(dt))/(2*a);
*x2=(-b-sqrt(dt))/(2*a);
}
else
{
*x1=-99999999;
*x2=-99999999;
}



}



int main()
{
float A,B,C,X1,X2;
cout << "\nDigite o valor de A: ";
cin >> A;
cout << "\nDigite o valor de B: ";
cin >> B;
cout << "\nDigite o valor de C: ";
cin >> C;
raizes(A,B,C,&X1,&X2);
cout << "\n\nDelta = " << delta(A,B,C);
cout << "\n\nX1 = " << X1 << " X2 = " << X2 << "\n\n";
return 0;
}