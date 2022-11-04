#include <iostream>
using namespace std;
int main()
{
    int mat[3][4], max;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mat[i][j];
        }
    }
    max = mat[0][0];
    int m, n;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max < mat[i][j])
            {
                max = mat[i][j];
                m = i;
                n = j;
            }
        }
    }
    cout << max << endl
         << "(" << m << "," << n << ")" << endl;
    return 0;
}