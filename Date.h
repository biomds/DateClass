//
// Created by Administrator on 2022/8/29.
//

#ifndef CLION_DATE_H
#define CLION_DATE_H
#include <array>
#include <iostream>

class Date {
    friend std::ostream& operator <<(std::ostream&, const Date &);

public:
    Date(int m=1,int d=1,int y=1900); // default constructor
    void setDate(int, int, int); // set month, day, year
    Date& operator++(); // prefix increment operator
    Date operator++(int); // add days, modify object
    Date& operator+=(unsigned int); // is date in a leap year?
    static bool leapYear(int); // is date at the end of month?
    bool endOfMonth(int) const;


private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
    static const std::array<unsigned int, 13> days; //days per month
    void helpIncrement(); // utility function for incrementing date

};


#endif //CLION_DATE_H
