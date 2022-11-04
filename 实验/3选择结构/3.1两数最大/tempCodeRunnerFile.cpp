#include <iostream>
using namespace std;
int main()
{
    double a, b, max;

    cin >> a;
    cin >> b;

    max = a;
    if (a < b)
    {
        max = b;
    }

    cout << max << endl;

    return 0;
}