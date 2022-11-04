#include <iostream>
#include <algorithm >
using namespace std;
int main()
{
    int dat[10];
    for (int i = 0; i < sizeof(dat) / sizeof(dat[0]); i++)
    {
        cin>>dat[i];
    }
    int max_num = *max_element(dat,dat+sizeof(dat) / sizeof(dat[0]));

    cout<<max_num<<endl;
    return 0;
    
}