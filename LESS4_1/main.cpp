#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    const int arr_size=10;
    int array[arr_size];
    for (int i=0; i<arr_size;i++)
    {
        cout << "Vvedite znachenie elementa " << i << ": ";
        cin >> array[i];
    }
    int max=array[0];
    int last_otriz;
for(int i=0;i<10;++i)
{
    if(array[i]>max)
    {
            max=array[i];
    }

}
cout << "Maksimal'noe chislo: " << max << endl;
for(int i=0;i<10;++i)
{
    if(array[i]<0)
    {
    last_otriz=array[i];
    }

}
            cout << "Poslednee otrizatel'noe chislo: " << last_otriz << endl;

            int x, y;
            cout << "Vvedite indeksy chisel: " << endl;
            cin >> x >> y;
            swap(array[x], array[y]);

            cout << array[0] << endl;
            cout << array[1] << endl;
            cout << array[2] << endl;
            cout << array[3] << endl;
            cout << array[4] << endl;
            cout << array[5] << endl;
            cout << array[6] << endl;
            cout << array[7] << endl;
            cout << array[8] << endl;
            cout << array[9] << endl;

return 0;
}
