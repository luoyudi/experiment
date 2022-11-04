#include <iostream>
#include <string.h>
using namespace std;
int charnum(string str)
{
    int num;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            num++;
        }
        if (str[i] >= 97 && str[i] <= 122)
        {
            num++;
        }
    }
    return num;
}

int main()
{
    string str = "";
    getline(cin, str);
    int num = charnum(str);
    cout << num << endl;
    return 0;
}