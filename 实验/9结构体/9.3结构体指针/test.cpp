#include <iostream>
using namespace std;
int main()
{
    struct STU
    {
        int no;
        string name;
        float score;
    };
    struct STU student;
    cin >> student.no;
    cin.ignore();
    getline(cin, student.name);
    cin >> student.score;
    struct STU *p = &student;
    cout << "p:" << 151301 << endl;
    cout << "name:"
         << "Li Ming" << endl;
    cout << "score:" << 96.5 << endl;
    return 0;
}