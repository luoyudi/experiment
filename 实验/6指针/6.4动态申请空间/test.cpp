#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> *a;
        sum = sum + *a;
    }
    free(a);
    cout << sum / n << endl;
    return 0;
}