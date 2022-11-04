#include <iostream>
#include <string.h>
using namespace std;

string check(char *input_name, char *input_password)
{
    if (!strcmp(input_name, "soft"))
    {
        if (!strcmp(input_password, "123456"))
        {
            return "yes";
        }
    }
    return "no";
}

int main()
{
    char name[10];
    char password[10];
    cin.getline(name, 10);
    cin.getline(password, 10);
    cout << check(name, password) << endl;
    return 0;
}
