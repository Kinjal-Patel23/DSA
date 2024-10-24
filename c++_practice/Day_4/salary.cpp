#include <iostream>

using namespace std;

int main()
{
    float basic_salary, hra, ta, da, total_salary;

    cout << "Enter the Basic Salary: ";
    cin >> basic_salary;

    cout << "Enter the hra value: ";
    cin >> hra;

    cout << "Enter the ta value: ";
    cin >> ta;

    cout << "Enter the da value: ";
    cin >> da;

    hra = (hra / 100) * basic_salary;
    ta = (ta / 100) * basic_salary;
    da = (da / 100) * basic_salary;

    total_salary = basic_salary + hra + ta + da;

    cout << "Basic Salary is: " << total_salary;
}