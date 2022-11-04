#include <iostream>
using namespace std;

double Product(double a, double b)
{
    return a * b;
};

int main()
{
    double a,b;
    cin>>a;
    cin>>b;
    cout<<Product(a,b)<<endl;
    return 0;
}