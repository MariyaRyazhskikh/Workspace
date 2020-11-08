//ПЕРЕВЕСТИ ЧИСЛО ИЗ 10-Й СИСТЕМЫ В 2-Ю//
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Vvod chisla: ";
    cin>>b;
    cout<<"Result: ";

    for (a=31;a>=0;a--)
        {
        if ((1<<a)&b)
                {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }

    cout<<endl;
system ("pause>>void");
}

