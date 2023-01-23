#include <iostream>

using namespace std;

bool vys (int year)
{
    bool res=false;
    if (year%4==0)
        res=true;
    if (year%100==0)
        res=false;
    if (year%400==0)
        res=true;
    return res;
}
int date (int d, int m, int y)
{
    int k=d;
    if (vys(y)&&(m>2)) 
        k+=y*366;
    else k+=y*365;
    switch(m-1)
    {
    case 12: k += 31;
    case 11: k += 30;
    case 10: k += 31;
    case  9: k += 30;
    case  8: k += 31;
    case  7: k += 31;
    case  6: k += 30;
    case  5: k += 31;
    case  4: k += 30;
    case  3: k += 31;
    case  2: k += 28;
    case  1: k += 31;
    }
    return k;
}
int dif (int day1, int day2, int mon1, int mon2, int year1, int year2)
{
    int k = date(day2, mon2, year2) - date(day1, mon1, year1) + 1;
    return k;
}
int main()
{
    int d1, d2, m1, m2, y1, y2;
    cout << "Enter first day: ";
    cin >> d1;
    cout << "Enter first month: ";
    cin >> m1;
    cout << "Enter first year: ";
    cin >> y1;
    cout << "Enter second day: ";
    cin >> d2;
    cout << "Enter second month: ";
    cin >> m2;
    cout << "Enter second year: ";
    cin >> y2;
    cout << "Between these two dates are " << dif(d1, d2, m1, m2, y1, y2) << " days\n";
}