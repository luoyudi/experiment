#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

class Dice
{
private:
    int points;

public:
    int throwing();
};

int Dice::throwing()
{
    return 1 + rand() % (6 - 1 + 1);
};

int main()
{
    srand((int)time(NULL));
    Dice *dice_1 = new Dice();
    Dice *dice_2 = new Dice();

    if ((dice_1->throwing() + dice_2->throwing() == 7))
    {
        cout << "you win" << endl;
    }
    else
    {
        cout << "you lose" << endl;
    }
    cout << (dice_1->throwing() + dice_2->throwing()) << endl;
}
