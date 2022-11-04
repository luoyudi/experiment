#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max, min;
    cin >> a;
    cin >> b;
    cin >> c;
    max = a;
    min = a;
    if (max < b)
    {
        max = b;
        if (max < c)
        {
            max = c;
        }
    }
    else
    {
    }
    if (min > b)
    {
        min = b;
        if (min > c)
        {
            min = c;
        }
    }

    cout << max << endl;
    cout << min << endl;
    return 0;
}
