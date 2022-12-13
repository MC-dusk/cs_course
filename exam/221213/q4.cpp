#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    string month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int month_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char str[9];
    cin >> str;
    int date[3];
    for (size_t i = 0; i < 3; i++)
    {
        char buff[3];
        strncpy(buff, str+3*i, 2);
        date[i] = atoi(buff);
    }
    if (date[0]>12 || date[0]<1)
    {
        cout << month[date[1]-1] << ' ' << date[2] << ", 20" << date[0] << endl;
        return 0;
    }
    if (date[1]>12 || date[1]<1)
    {
        cout << month[date[0]-1] << ' ' << date[1] << ", 20" << date[2] << endl;
        return 0;
    }
    if (date[2]>month_days[date[1]-1])
    {
        cout << month[date[0]-1] << ' ' << date[1] << ", 20" << date[2] << endl;
        return 0;
    }
    if (date[0]>date[2])
    {
        int year_dis = date[0]-date[2]-1;
        int spec_month = date[0]/4 - date[2]/4;
        int days = 365 * year_dis + spec_month;
        int days_front=0, days_back=0;
        for (size_t i = 0; i < date[1]-1; i++)
        {
            days_front += month_days[i];
        }
        days_front += date[2];
        days += days_front;
        for (size_t i = date[0]; i < 12; i++)
        {
            days_back += month_days[i];
        }
        days_back += month_days[date[0]-1] - date[1];
        days += days_back;
        cout << days << endl;
    }
    else
    {
        int year_dis = date[2]-date[0]-1;
        int spec_month = date[2]/4 - date[0]/4;
        int days = 365 * year_dis + spec_month;
        int days_front=0, days_back=0;
        for (size_t i = 0; i < date[0]-1; i++)
        {
            days_front += month_days[i];
        }
        days_front += date[1];
        days += days_front;
        for (size_t i = date[1]; i < 12; i++)
        {
            days_back += month_days[i];
        }
        days_back += month_days[date[1]-1] - date[2];
        days += days_back;
        cout << days << endl;
    }
    return 0;
}