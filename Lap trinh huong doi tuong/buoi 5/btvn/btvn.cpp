#include <bits/stdc++.h>
#include "time.h"

using namespace std;
 
Time::Time() { //tao dt voi tgian hien tai
    time_t now = time(0); //lay thoi gian hien tai
    tm *ltm = localtime(&now); //dinh dang lai thoi gian
    hour = ltm->tm_hour;
    minute = ltm->tm_min;
    second = ltm->tm_sec;
}


Time::Time(int h, int m, int s) { //tao DT voi tham so
    setTime(h, m, s);
}

Time::Time(const Time &t) { //sao chep DT
    hour = t.hour;
    minute = t.minute;
    second = t.second;
}


void Time::setHour(int h) {
    hour = h;
}
void Time::setMinute(int m) {
    minute = m;
}
void Time::setSecond(int s) {
    second = s;
}

void Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);
}

// dong ho dinh dang 24h
void Time::showTime1() {
    string gio = to_string(hour);
    string phut = to_string(minute);
    string giay = to_string(second);
    if(hour<10) gio = "0" + gio;
    if(minute<10) phut = "0" + phut;
    if(second<10) giay = "0" + giay;
    cout << gio << ":"
         << phut << ":"
         << giay << endl;   
}

// dong ho dinh dang 12h (AM/PM)
void Time::showTime2() {
    string gio = to_string((hour % 12 == 0) ? 12 : (hour % 12));
    string phut = to_string(minute);
    string giay = to_string(second);
    if(hour%12<10) gio = "0" + gio;
    if(minute<10) phut = "0" + phut;
    if(second<10) giay = "0" + giay;
    cout << gio << ":" 
    << phut << ":" 
    << giay << " " 
    << ((hour >= 12) ? "PM" : "AM") << endl;
}

//tua dong ho them 1 giay
void Time::tick() {
    second++;               // tang giay len 1
    if (second >= 60) {     // neu vuot qua 59 giay
        second = 0;         // reset giay
        minute++;           // tang phut len 1
        
        if (minute >= 60) { // neu vuot qua 59 phut
            minute = 0;     // reset phut
            hour++;         // tang gio len 1
            
            if (hour >= 24) {  // neu vuot qua 23 gio
                hour = 0;   // sang ngay moi, gio ve 0:0:0
            }
        }
    }
}


int main() {
    Time time; 
    cout << "Thoi gian hien tai cua may tinh (24h): ";
    time.showTime1();
    cout << "Thoi gian hien tai cua may tinh (12h): ";
    time.showTime2();
    cout << endl;
    
    int h,m,s;
    cout << "Nhap gio (0-23): ";
    do {
        cin >> h;
    } while (h < 0 || h > 23);
    cout << "Nhap phut (0-59): ";
    do {
        cin >> m;
    } while (m < 0 || m > 59);
    cout << "Nhap giay (0-59): ";
    do {
        cin >> s;
    } while (s < 0 || s > 59);

    Time time2(h, m, s);
    cout << "Dong ho cai dat bang tay: ";
    time2.showTime1();
    cout << "Dinh dang 12h: ";
    time2.showTime2();
    cout << endl;
    
    time2.tick();
    cout << "Dong ho tren sau khi goi ham tick(): ";
    time2.showTime1(); 
    cout << "Dinh dang 12h: ";
    time2.showTime2();

    return 0;
}
