#include <bits/stdc++.h>
using namespace std;

void quadratic_solver(double a, double b, double c)
{
    if (a == 0)
    {
        cout << "Not a quadratic equation." << endl;
        return;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << x1 << ", " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        cout << "Roots are real and equal: " << root << endl;
    }
    else
    {
        cout << "imaginary solution";
    }
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    quadratic_solver(a, b, c);
    return 0;
}