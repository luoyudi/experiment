#include <iostream>
using namespace std;
void swap(float *p, float *q)
{
    float *x;
    *x = *q;
    *q = *p;
    *p = *x;
}
int main()
{
    float a, b;
    cin >> a;
    cin >> b;
    swap(&a, &b);
    cout << a << endl
         << b << endl;
}