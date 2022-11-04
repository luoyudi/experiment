#include <iostream>
using namespace std;
int main()
{
    int mark;
    cin >> mark;
    if (mark >= 0 && mark <= 100)
    {
        mark = mark / 10;
        switch (mark)
        {
        case 10:
            cout << 'A' << endl;
            break;
        case 9:
            cout << 'A' << endl;
            break;
        case 8:
            cout << 'B' << endl;
            break;
        case 7:
            cout << 'C' << endl;
            break;
        case 6:
            cout << 'D' << endl;
            break;
        default:
            cout << 'E' << endl;
            break;
        }
    }
}