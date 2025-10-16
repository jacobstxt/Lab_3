#include <iostream>
#include <Windows.h>
#include "Comb.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, k;
    std::cout << "Введіть ваші n і k: ";
    std::cin >> n >> k;
    std::cout << "Факторіал числа - " << factorial(n) << std::endl;
    std::cout << "Розміщення без повторень - " << A(n, k)<<std::endl;
    std::cout << "Розміщення з повтореннями - " << _A(n, k)<< std::endl;
    std::cout << "Сполучення без повторень - " << C(n, k)<< std::endl;
    std::cout << "Cполучення з повтореннями - " << _C(n, k)<< std::endl;



    int* A = new int[n];
    for (int i = 0; i < n; i++) {
        A[i] = i + 1;
    }


    
    /*int lich = 1;
    std::cout << lich << ": ";
    show(A, n);
    for (int i = 1; i < factorial(n); i++) {     
        GenPerm(A, n);
        lich++;
        std::cout << lich << ": ";
        show(A, n);
    }*/
    

    int lich = 1;
    std::cout << lich << ": ";
    show(A, k);

    for (int i = 1; i < C(n, k); i++) {
        ++lich;
        std::cout << lich << ": ";
        GenComb(A, n, k);
        show(A, k);
    }
    




    /*while (GenComb(A, n, k)) {
        lich++;
        std::cout << lich << ": ";
        show(A, k);
    }*/



    
    
    



}

