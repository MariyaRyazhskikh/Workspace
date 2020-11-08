//НАЙТИ НАИМЕНЬШИЙ ОД 3-Х НАТУРАЛЬНЫХ ЧИСЕЛ//
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,min;
    cout << "Vvedite chisla:";
    cin >> a >> b >> c;
    min = a>b?b:a;
    min = b>c?c:b;
    min = a>c?c:a;

        for (d=2;d<min;d++)
            if (((a%d==0) && (b%d==0) && (c%d==0))) break;

        if (d==min)
    {
    cout << "Net obshego delitel'a";
    return 0;
    }
    cout << "Naimen'shiy obshiy delitel' raven:" << d << endl;
    return 0;
}

