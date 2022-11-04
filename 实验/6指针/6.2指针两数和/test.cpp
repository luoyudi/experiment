#include <iostream>
using namespace std;

int sum(int *p, int *q)
{

    return *p + *q;
}

int main()
{
    int a, b, t;
    cin >> a;
    cin >> b;
    t = sum(&a, &b);
    cout << t << endl;
}
