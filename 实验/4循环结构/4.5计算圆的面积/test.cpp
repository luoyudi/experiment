#include <cmath>
#include <iostream>
using namespace std;

const double PI = 3.1415926;
int main()
{
    int i;
    double area;
    for (i = 0; i <= 15; i++)
    {
        area = PI * i * i;
        //请在此处输入代码
        if (area <= 50)
        {
            continue;
        }

        cout << floor(area) << endl;
    }
    return 0;
}
