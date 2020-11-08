//ПЛОЩАДЬ КАКОЙ ФИГУРЫ БОЛЬШЕ?//
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double r=1,a=2,d=3,sr,st,sc,z;
    sr=3.1416*r*r;
    st=sqrt(3)/4*a*a;
    sc=d*d;
    z=(sr>st)?sr:st;
    z=(sr>sc)?sr:sc;
    z=(st>sc)?st:sc;
    cout<<z;
    return 0;;
    }

