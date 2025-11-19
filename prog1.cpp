#include <iostream>

using namespace std;

class HourstoSec
{
public:
    int hrs, mins, sec;

    void settimeConvt(int Hours, int Mins, int Sec)
    {
        this->hrs = Hours;
        this->mins = Mins;
        this->sec = Sec;

        hrs = sec / 3600;
        sec = sec % 3600;

        mins = sec / 60;
        sec = sec % 60;
    }

    void gettimeConvt(int h, int m, int s)
    {
        cout << "HH:MM:SS " <<"0"<< hrs << ":" << mins << ":" << sec << "0";
    }

    void setsectohrs(int Hours, int Mins, int Sec)
    {
        this->hrs = Hours;
        this->mins = Mins;
        this->sec = Sec;

        hrs = hrs * 3600;
        mins = mins * 60;
        sec = hrs + mins + sec;
    }

    void getsectohrs()
    {
        cout << "Total seconds is " << sec << endl;
    }
};

int main()
{
    int choice;
    cout << "\nPress 1 for converting hours,minutes & seconds to seconds";
    cout << "\nPress 2 for converting seconds into hours and minutes";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        HourstoSec time;

        int hours, mins, sec;
        cout << "Enter seconds: ";
        cin >> sec;

        time.settimeConvt(hours, mins, sec);
        time.gettimeConvt(hours, mins, sec);
        break;
    case 2:

        HourstoSec seconds;
        int Hours, Mins, Sec;

        cout << "Enter hours: ";
        cin >> Hours;

        cout << "Enter mins: ";
        cin >> Mins;

        cout << "Enter sec: ";
        cin >> Sec;

        seconds.setsectohrs(Hours, Mins, Sec);
        seconds.getsectohrs();
        break;
    default:
        cout << "Number you've chosen is incorrect";
    }

    return 0;
}