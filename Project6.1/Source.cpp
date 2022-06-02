#include <iostream>

class Date {
public:
    int seconds, minutes, hours;
    Date(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
    Date& operator + (const Date& date) const;
    friend std::ostream& operator << (std::ostream& os, const Date& dt);
};

Date& Date::operator + (const Date& date) const 
{
    Date result(0, 0, 0);
    int rest, delta;

    rest = (seconds + date.seconds) % 60;
    delta = (seconds + date.seconds) / 60;
    result.seconds = rest;

    rest = (minutes + date.minutes + delta) % 60;
    delta = (minutes + date.minutes + delta) / 60;
    result.minutes = rest;

    result.hours = (hours + date.hours + delta) % 24;

    return result;
}

std::ostream& operator << (std::ostream&  cout, const Date& date)
{
    cout << date.hours << ':' << date.minutes << ':' << date.seconds;
    return cout;
}

int main() {
    int h[2], m[2], s[2];
    for (int i = 0; i < 2; i++)
    {
        std::cout << "\ninput " << i + 1 << " hours "; std::cin >> h[i];
        std::cout << "\ninput " << i + 1 << " minutes "; std::cin >> m[i];
        std::cout << "\ninput " << i + 1 << " seconds "; std::cin >> s[i];
    }

    Date date1(h[0], m[0], s[0]), date2(h[1], m[1], s[1]);
    Date date3 = date1 + date2;
    std::cout << date3;
    return 0;
}