//ПОМЕНЯТЬ МЕСТАМИ ЦИФРЫ МЛАДШЕГО И СТАРШЕГО РАЗРЯДОВ//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int S,FirstNumb,LastNumb,n=1;
    printf("Vvedite chislo: ");
    cin>>S;
        while ((S/=10)>0)
        {
            n++;
        }
    LastNumb=S%10;
        while (S%10>10)
        {
          FirstNumb=S;
        }
    S-=FirstNumb*pow(10,n)-LastNumb;
    S=S+FirstNumb+LastNumb*pow(10,n);
    printf("Resultat preobrazovania raven: ");
    scanf("%d",&S);
    cout<<S;
    return 0;
}

