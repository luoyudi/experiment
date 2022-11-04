#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char input;
    cin >> input;
    if (isalnum(input))
    {
        if (input >= '0' && input <= '9')
        {
            cout << "是数字" << endl;
        }
        if (input >= 'a' && input <= 'z')
        {
            cout << "是小写字母" << endl;
        }
        if (input >= 'A' && input <= 'Z')
        {
            cout << "是大写字母" << endl;
        }
    }
    else
    {
        cout << "不是数字或者字母" << endl;
    }
}