#include <iostream>
using namespace std;
int main()
{
    int time_in_seconds;
    cin >> time_in_seconds;
    int red_duration, green_duration, yellow_duration;
    cin >> red_duration >> green_duration >> yellow_duration;
    int net_seconds = red_duration + green_duration + yellow_duration;
    int round_completed = 0;
    for (int i = 1; i <= time_in_seconds; i++)
    {
        if (round_completed >= net_seconds)
        {
            round_completed = 0;
        }
        if (round_completed < red_duration)
        {
            cout << i << " Red" << endl;
        }
        else if (round_completed < red_duration + green_duration)
        {
            cout << i << " Green" << endl;
        }
        else
        {
            cout << i << " Yellow" << endl;
        }
        round_completed++;
    }
    return 0;
}
