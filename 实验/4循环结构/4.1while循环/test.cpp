#include <iostream>
using namespace std;
int main()
{
    int i = 0, s = 0;
    while (i <= 100)
    {
        s = s + i;
        i++;
    }
    cout << s << endl;
    return 0;
}