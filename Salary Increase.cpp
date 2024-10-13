#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salary, new_salary, reajuste;
    int percentual;

    cin >> salary;
    if (salary <= 400.00)
    {
        percentual = 15;
    }
    else if (salary <= 800.00)
    {
        percentual = 12;
    }
    else if (salary <= 1200.00)
    {
        percentual = 10;
    }
    else if (salary <= 2000.00)
    {
        percentual = 7;
    }
    else
    {
        percentual = 4;
    }
    reajuste = salary * percentual / 100.0;
    new_salary = salary + reajuste;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}