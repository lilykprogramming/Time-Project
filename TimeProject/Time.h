#ifndef TIME_H
#define TIME_H

class Time
{
    private:
        int h;
        int m;
        int s;
        bool time_of_the_day; // PM - 0, AM - 1
    public:
        Time(int h, int m, int s, bool time_of_the_day);
        Time difference(const Time& model); 
        void return_variable();
};

#endif