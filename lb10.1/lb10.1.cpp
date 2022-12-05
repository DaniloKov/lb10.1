//1. Обчислити площу поверхні 𝑆=4𝜋𝑟2 та об’єм 𝑉=4𝜋𝑟3/3 сфери за заданим радіусом 𝑟.
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double r, S, V;                 //задаємо змінні
    cout << "Введіть радіус сфери:";
    cin >> r;
    S = 4 * 3.14 * pow(r, 2);       //площа
    V = (4 * 3.14 * r * 3) / 3;     //обєм
    cout << "Площа:" << S << endl;  //виводимо значення з ендл для наступної стрічки
    cout << "Обєм:" << V;           //виводимо обєм
    return 0;
}