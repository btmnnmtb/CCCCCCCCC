
#include <iostream>
#include < cmath > 
#include <math.h>

using namespace std;
long double fact(int a)
{
    if (a < 0)
        return 0;
    if (a == 0)
        return 1;
    else
        return a * fact(a - 1);
}

int main()
{

    setlocale(LC_ALL, "Russian");




    int x = 1;
    do
    {

        cout << "\v Введите операцию \n";
        cout << "\v 1.Сложить 2 числа \n";
        cout << "\v 2.Вычесть первое из второго \n";
        cout << "\v 3.Перемножить два числа \n ";
        cout << "\v 4.Разделить первое на второе \n";
        cout << "\v 5.Возвести в степень N первое число \n";
        cout << "\v 6.Найти квадратный корень из числа \n";
        cout << "\v 7.Найти 1 процент от числа \n ";
        cout << "\v 8.Найти факториал из числа \n";
        cout << "\v 9.Завершить программу \n ";


        cout << "Введите операцию : ";
        cin >> x;
        if (x == 1)
        {
            system("cls");
            cout << "Сложение \n";
            double a;
            double b;
            cout << "Первое число = ";
            cin >> a;
            cout << "Введите вторе число = ";
            cin >> b;
            double sum = a + b;
            cout << "Сумма чисел = " << sum << endl;






        }
        else if (x == 2)
        {
            system("cls");
            cout << "Вычитание  \n";
            double a;
            double b;
            cout << "Первое число = ";
            cin >> a;
            cout << "Введите вторе число = ";
            cin >> b;
            double raz = a - b;
            cout << " Разность чисел  = " << raz << endl;

        }
        else if (x == 3)
        {
            system("cls");
            cout << "Умножение \n";
            double a;
            double b;
            cout << "Первое число = ";
            cin >> a;
            cout << "Введите вторе число = ";
            cin >> b;
            double raz = a * b;
            cout << "Произведение  = " << raz << endl;

        }
        else if (x == 4)
        {
            system("cls");
            cout << "Деление \n";
            double a;
            double b;
            cout << "Первое число = ";
            cin >> a;
            cout << "Введите вторе число = ";
            cin >> b;
            double del = a / b;
            cout << "Частное  = " << del << endl;


        }
        else if (x == 5)
        {
            system("cls");
            cout << "Возведение в стпень  \n";
            double a;
            double b;
            cout << "Первое число = ";
            cin >> a;
            cout << "Степень в которую 1-ое  число возведется = ";
            cin >> b;
            double ww = pow(a, b);
            cout << "Cтепень числа" << ww << endl;
        }
        else if (x == 6)
        {

            system("cls");
            cout << "Нахождение корня  \n";
            double a;

            cout << "Первое число = ";
            cin >> a;
            double z = sqrt(a);


            cout << "Корень  числа = " << z << endl;

        }
        else if (x == 7)
        {
            system("cls");
            cout << "Нахождение 1 процента  \n";
            float a;

            cout << "Первое число = ";
            cin >> a;
            double  z = a / 100;


            cout << "Cтепень числа = " << z << endl;

        }

        else if (x == 8)
        {
            system("cls");
            cout << "Нахождение факториала  \n";
            int w;
            cin >> w;


            cout << "Cтепень числа = " << fact(w) << endl;
            cout << "";

        }







    } while (x != 9);
}

