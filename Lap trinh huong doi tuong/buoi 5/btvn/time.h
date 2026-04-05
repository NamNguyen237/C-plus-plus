#ifndef TIME_H
#define TIME_H
class Time{
private:
    int hour;//0-23
    int minute; //0-59
    int second; //0-59
public:
    Time();//Tao DT lay gio he thong
    Time(int h, int m, int s);
    Time(const Time &t);
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    void setTime(int h, int m, int s);
    void showTime1();//hour:minute:second
    void showTime2();//hour:minute AM/PM
    void tick(); //increase 1 second
};
#endif // TIME_H
