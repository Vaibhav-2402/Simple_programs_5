#include<iostream>
using namespace std;
struct time
{
    int hours;
    int minutes;
    int seconds;
};
struct convert
{
    time t1;
    time t2;
};
int man()
{
    convert c;
    int l1,l2,l3,f1,f3,f5,f2;
    cout<<"\n Enter the hours, minutes, seconds  of time 1: "<<endl; cin>>c.t1.hours>>c.t1.minutes>>c.t1.seconds;
    l1=c.t1.hours*3600+c.t1.minutes*60+c.t1.seconds;
    cout<<"\n Enter the hours, minutes, seconds  of time 2: "<<endl; cin>>c.t2.hours>>c.t2.minutes>>c.t2.seconds;
    l2=c.t2.hours*3600+c.t2.minutes*60+c.t2.seconds;
    l3=l1+l2;
    f1=l3/3600;
    f2=l3%3600;
    f3=f2/60;
    f5=f2%60;
    cout<<"\n result is: "<<f1<<":"<<f3<<":"<<f5;
    
    return 0;
}