﻿#include <iostream> // подключение библиотеки стандартного вода и вывода
using namespace std; // подключение пространства имен std
int main()
{
    for (int i = 1; i < 10; i += 2) // перебор всех нечетных цифр, стоящие в разряде сотен
    {
        for (int j = 1; j < 10; j += 2)// перебор нечетных цифр разряда десятков
        {
            for (int k = 1; k < 10; k += 2)// перебор нечетных цифр разрядка единиц
            {
                cout << i * 100 + j * 10 + k << " "; // составление и вывод чисел
            }
            cout << "\n";
        }
     }// таким образом числ, все цифры которых нечетные, были составлены

    /*for (int i = 100; i <= 999; i++)
    {
        int a = i;
        if ((a % 2 != 0) && ((a / 100 % 2) != 0) && ((a / 10 % 2) != 0))
            cout << i << " ";
    }*/
    
    return 0;
}
