#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int main()
{
    double R;
    double x, xp, xk, dx;
    double y;

    cout << "R = ";
    cin >> R;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << fixed;

    cout << "------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(10) << "y" << " |" << endl;
    cout << "------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x < -6)
            y = R;

        else if (x >= -6 && x < -R)
            y = (x + R) / (6 - R);

        else if (x >= -R && x < 0)
            y = R - sqrt(pow(R, 2) - pow(x + R, 2));

        else if (x >= 0 && x <= R)
            y = sqrt(pow(R, 2) - pow(x, 2));

        else
            y = R - x;

        cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(10) << setprecision(3) << y << " |" << endl;

        x += dx;
    }

    cout << "------------------------" << endl;

    return 0;
}