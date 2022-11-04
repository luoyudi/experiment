#include <iostream>

using namespace std;

class Clock
{
public:
  void SetTime(int NewH, int NewM, int NewS);
  void ShowTime();

private:
  int Hour, Minute, Second;
};

void Clock::SetTime(int NewH, int NewM, int NewS)
{
  Hour = NewH;
  Minute = NewM;
  Second = NewS;
}

void Clock::ShowTime()
{
  cout << Hour << ":" << Minute << ":" << Second << endl;
}


int main()
{
  Clock BigBen;
  BigBen.SetTime(12, 45, 25);
  BigBen.ShowTime();
  return 0;
}