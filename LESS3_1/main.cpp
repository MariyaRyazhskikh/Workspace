//ОПРЕДЕЛИТЬ КОЛИЧЕСТВО ЦИФР В ЦЕЛОМ ЧИСЛЕ//
#include <iostream>

int main()
{
    int x;
    int n=1;
    std::cout<<"Vvedite tseloe chislo:";
    std::cin >> x;
    while ((x/=10)>0) n++;
    std::cout << n;
    return 0;
}
