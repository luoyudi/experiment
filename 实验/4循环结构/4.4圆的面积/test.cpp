#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
    int S;
    for (int i = 1; i <= 10; i++)
    {
        S = PI * i * i;
        if (S > 100)
        {
            break;
        }

        cout << S << endl;
    }
    return 0;
}