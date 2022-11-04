#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *p;
    p = &n;
    cout << *p / 2 << endl;
    return 0;
}