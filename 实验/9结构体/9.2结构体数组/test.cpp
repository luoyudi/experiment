#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int id;
    string name;
    int grades;
};

bool comp(const Student &x, const Student &y)
{
    return x.grades > y.grades;
}

int main()
{

    struct Student students[3];
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        cin >> students[i].id;
        cin >> students[i].name;
        cin >> students[i].grades;
    }

    sort(students, students + 3, comp);

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        cout << students[i].id << " " << students[i].grades << endl;
    }
    return 0;
}