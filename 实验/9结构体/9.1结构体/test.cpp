#include <iostream>
using namespace std;
int main()
{
    struct STU
    {
        int id;
        string name;
        int s1;
        int s2;
        int s3;
        int s4;
        int average;
        // id, name, s1, s2, s3, s4, average
    };
    struct STU student;

    cin >> student.id;
    cin >> student.name;
    cin >> student.s1;
    cin >> student.s2;
    cin >> student.s3;
    cin >> student.s4;
    student.average = (student.s1 + student.s2 + student.s3 + student.s4) / 4;
    cout << student.id << " " << student.name << " " << student.average << endl;
    return 0;
}