#include <iostream>
using namespace std;

void grade(int *list, int len)
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for (int i = 0; i < len; i++)
    {
        switch (list[i] / 10)
        {
        case 10:
            a++;
            break;
        case 9:
            a++;
            break;
        case 8:
            b++;
            break;
        case 7:
            c++;
            break;
        case 6:
            d++;
            break;
        default:
            e++;
            break;
        }
    }
    cout << "A:" << a << endl;
    cout << "B:" << b << endl;
    cout << "C:" << c << endl;
    cout << "D:" << d << endl;
    cout << "E:" << e << endl;
}

int main()
{
    int len;
    cin >> len;
    int *list = new int[len];
    for (int i = 0; i < len; i++)
    {
        cin >> list[i];
    }
    grade(list, len);
    return 0;
}