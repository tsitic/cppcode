#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

void cnslReadCoeff(double& a, double& b, double& c) {
    cout << "Введите коэффициенты a, b и c: ";
    cin >> a >> b >> c;
}

void calcRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1, root2;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "два корня:" << '\n';
        cout << "x1 = " << root1 << '\n';
        cout << "x2 = " << root2 << '\n';
    }
    else if (discriminant == 0) {
        double root1;
        root1 = -b / (2 * a);
        cout << "один корень:" << '\n';
        cout << "x = " << root1 << '\n';
    }
    else {
        cout << "Уравнение не имеет вещественных корней." << '\0';
    }
}

int main() {
    setlocale(LC_CTYPE, "Russian");
    double a, b, c;
    cnslReadCoeff(a, b, c);
    if (a == 0) {
        cout << "Коэффициент a не может быть равен 0 в квадртном уравнении\0";
        return 1;
    }
    else {
        calcRoots(a, b, c);
    }
    return 0;
}