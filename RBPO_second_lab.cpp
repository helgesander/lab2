#include <iostream>

import student_1bib21094.Lab2.Variant21.Task1;
import student_1bib21094.Lab2.Variant21.Task2;
import student_1bib21094.Lab2.Variant21.Task3;
import student_1bib21094.Lab2.Variant21.Task4;
import student_1bib21094.Lab2.Variant21.Task5;

void task1();
void task2();
void task3();
void task4();
void task5();
void input(double&, double&, double&, int&, double&);
void output(double, double, double, double);

int main()
{
    setlocale(LC_ALL, "ru");
    int flag = 1;
    while (flag) {
        int number_of_task;
        std::cout << "Введите цифру задания:\n--> ";
        std::cin >> number_of_task;
        switch (number_of_task) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
        default:
            std::cout << "Было введено неверное значение задания!\n";
        }
        std::cout << "Еще раз? --> ";
        std::cin >> flag;
    }
}

void task1() {
    double x_first, y_first, x_second, e;
    int n;
    input(x_first, y_first, x_second, n, e);
    output(RBPO::Lab2::Variant21::Task1::function1(x_first, y_first),
        RBPO::Lab2::Variant21::Task1::function2(x_second),
        RBPO::Lab2::Variant21::Task1::function3(n),
        RBPO::Lab2::Variant21::Task1::function4(e));
}

void task2() {
    double x_first, y_first, x_second, e;
    int n;
    input(x_first, y_first, x_second, n, e);
    output(RBPO::Lab2::Variant21::Task2::function1(x_first, y_first),
        RBPO::Lab2::Variant21::Task2::function2(x_second),
        RBPO::Lab2::Variant21::Task2::function3(n),
        RBPO::Lab2::Variant21::Task2::function4(e));
}

void task3() {
    double x_first, y_first, x_second, e;
    int n;
    input(x_first, y_first, x_second, n, e);
    output(RBPO::Lab2::Variant21::Task3::function1(x_first, y_first),
        RBPO::Lab2::Variant21::Task3::function2(x_second),
        RBPO::Lab2::Variant21::Task3::function3(n),
        RBPO::Lab2::Variant21::Task3::function4(e));
}

void task4() {
    double x_first, y_first, x_second, e;
    int n;
    input(x_first, y_first, x_second, n, e);
    output(RBPO::Lab2::Variant21::Task5::function1(x_first, y_first),
        RBPO::Lab2::Variant21::Task4::function2(x_second),
        RBPO::Lab2::Variant21::Task4::function3(n),
        RBPO::Lab2::Variant21::Task4::function4(e));
}

void task5() {
    double x_first, y_first, x_second, e;
    int n;
    input(x_first, y_first, x_second, n, e);
    output(RBPO::Lab2::Variant21::Task5::function1(x_first, y_first),
        RBPO::Lab2::Variant21::Task5::function2(x_second),
        RBPO::Lab2::Variant21::Task5::function3(n),
        RBPO::Lab2::Variant21::Task5::function4(e));
}

void input(double& x_first, double& y_first, double& x_second, int& n, double& e) {
    std::cout << "Введите x и y для f1(): ";
    std::cin >> x_first >> y_first;
    std::cout << "Введите x для f2(): ";
    std::cin >> x_second;
    std::cout << "Введите n для f3(): ";
    std::cin >> n;
    std::cout << "Введите точность e для f4(): ";
    std::cin >> e;
}

void output(double res1, double res2, double res3, double res4) {
    if (res1 == -1) std::cout << "Недопустимое значение для x или y!" << std::endl;
    else std::cout << "f1(x, y) = " << res1 << std::endl;
    std::cout << "f2(x) = " << res2 << std::endl;
    std::cout << "f3(n) = " << res3 << std::endl;
    std::cout << "f4() = " << res4 << std::endl;
}