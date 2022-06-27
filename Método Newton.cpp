#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

typedef double (*ptr_func)(double);

double f (double x){
    return x - 3 - sin(x+2);
}
double g (double x){
    return 4*cos(x) - exp(x);
}
double derivada(ptr_func f, double p){
    double h = 0.00001;
    return (f(p+h) - f(p))/h;
}
void newton(ptr_func f,double x0,double E){
    double x1, erro;
    int k = 0,kmax = 100;

    cout << "X0 = " << x0 << "\n";

    do
    {
        x1 = x0 - f(x0) /derivada(f,x0);
        
        erro = fabs((x1 - x0)/x1);

        x0 = x1;

        k++;

        cout << "X" << k <<" = " << x1 << "\n";

    } while (erro >= E && k <= kmax);
}

int main(){
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);
    
    double x0 = 3, E = 0.01;
    // x0 = chute inicial
    // E = precisão
    
    newton(g, x0, E);

    return 0;
    
}