#include <iostream>
using namespace std;
int main()
{
    int i = 0, s = 0;
    do
    {
        s = s + i;
        i++;
    } while (i <= 100);

    cout << s << endl;
    return 0;
}