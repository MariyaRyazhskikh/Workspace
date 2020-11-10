//в массиве 7х7 поменять местами k-ю строчку и столбец//
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n=7;
int mass[n][n];
int k;
for (int i=0;i<n;i++)
 {
 for (int j=0;j<n;j++)
 {
 mass[i][j] = i+j;
 cout << mass[i][j] << "  ";
 }
 cout << endl;
 }
cout << "Vvedite nomer stroki i stolbtsa: ";
cin >> k;
 for (int i=0;i<n;i++)
 {
        for (int j=0;j<n;j++)
        {
        int temp = mass[k][i];
        mass[k][i] = mass[i][k];
        mass[i][k] = temp;
        swap (mass[i][k], mass[k][i]);
        cout << mass[i][j] << " ";
        }
 cout << endl;
 }
    return 0;
}
