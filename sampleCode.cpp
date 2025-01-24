#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;

    void normalize()
    {
        hours += minutes / 60;
        minutes %= 60;
    }
};

bool isGreater(Time t1, Time t2)
{
    t1.normalize();
    t2.normalize();

    if (t1.hours > t2.hours)
        return true;

    else if (t1.hours == t2.hours && t1.minutes > t2.minutes)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    Time t1;
    Time t2;

    cout << "Enter the first time t1:" << endl;
    cin >> t1.hours >> t1.minutes;
    cout << "Enter the second time t2:" << endl;
    cin >> t2.hours >> t2.minutes;

    t1.normalize();
    t2.normalize();

    if (isGreater(t1, t2))
    {
        cout << "Time t1 is greater";
    }
    else if (t1.hours == t2.hours && t1.minutes == t2.minutes)
    {
        cout << "Both the times are equal";
    }
    else
    {
        cout << "Time t2 is greater";
    }

    return 0;
}