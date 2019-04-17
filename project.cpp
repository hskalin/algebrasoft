#include <iostream>
using namespace std;

double f(double x){
    return (5*x*x*x - 3*x + 0.5);        //3x^3 -5x^2 + x + 2
}

double df(double x){
    double h = 0.00000001;
    return ((f(x+h) - f(x))/h);             //calculates derivaive
}

double ddf(double x){
    double h = 0.0000001;
    return ((df(x+h) - df(x))/h);             //calculates double derivaive
}


double nm(double x){
     return (x - (f(x)/df(x)));
}

double nm2(double x){
     return (x - (df(x)/ddf(x)));
}

    
int main(){
    int i=0;
    double midpnt=1, guess1=0, guess2=0;
    
    while(i<40){
        midpnt = nm2(midpnt);
        i++;
    } i=0;
    
    guess1=midpnt+1;
    guess2=midpnt-1;
    
    while(i<40){
        guess1 = nm(guess1);
        i++;
    } i=0;
    
    while(i<40){
        guess2 = nm(guess2);
        i++;
    } i=0;
    
    cout<<guess1<<" | "<<guess2;
    cout<<endl;
    
    return 0;
}
