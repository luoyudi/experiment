#include <iostream>
using namespace std;
void Dec2Binary(int a)
{
    int x, y;
    x = a / 2;
    y = a % 2;
    if (x == 0)
    {
        cout << y;
    }
    else
    {
        Dec2Binary(x);
        cout << y;
    }
}

int main()
{
    int t, a;
    cin >> t;
    Dec2Binary(t);
    return 0;
}