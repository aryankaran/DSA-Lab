#include <iostream>
#include <cstdio>

using namespace std;


class Time {
    int days, hour, minute, second;
    
    public:
        Time() {
            days = 0, hour = 0, minute = 0, second = 0;
        }

        Time(int x, int y, int z) {
            hour = x;
            minute = y;
            second = z;
        }

        void display();
        Time add(Time T2);
        Time sub(Time T2);
};


Time Time::add(Time T2){
    Time temp;

    temp.second = (second + T2.second) % 60;
    temp.minute = (second + T2.second) / 60;

    temp.minute += minute + T2.minute;
    temp.minute = temp.minute % 60;

    temp.hour = (minute + T2.minute) / 60;
    temp.hour += hour + T2.hour;
    
    return temp;
}

Time Time::sub(Time T2) {
    Time temp;
    
    int seconds_1 = ( hour*60*60 + minute * 60 + second );
    int seconds_2 = ( T2.hour*60*60 + T2.minute * 60 + T2.second );
    int subs;

    if (seconds_1 < seconds_2) {
        subs = seconds_2 - seconds_1;
    } else {
        subs = seconds_1 - seconds_2;
    }


    temp.hour = subs / 3600;
    subs %= 3600;
    temp.minute = subs / 60;
    subs %= 60;
    temp.second = subs;

    return temp;

}

void pad(int number){
    if (number / 10 == 0) {
        cout << "0" << number;
    } else {
        cout << number;
    }
}

void Time::display() {
    pad(hour) ; cout << ":" ; pad(minute) ; cout << ":" ; pad(second) ; cout << endl;
}


int main() {
    Time T1(15,25,45);
    Time T2(6,55,50);

    Time T3, T4;

    T3 = T1.add(T2);
    T4 = T1.sub(T2);

    cout << "1st time: " ; T1.display();
    cout << "2nd time: " ; T2.display();
    cout << "Addition: " ; T3.display();
    cout << "Substraction: " ; T4.display();

}