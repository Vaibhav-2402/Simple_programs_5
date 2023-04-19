#include<iostream>
using namespace std;
struct phone
{
    int code;
    int exchange;
    int number;
};
int main()
{
    phone p1;
    cout<<"\n Enter area code, exchane number and phone number"<<endl; cin>>p1.code>>p1.exchange>>p1.number;
    cout<<"My number is (212) 767-8900"<<endl<<"Your number is ("<<p1.code<<") "<<p1.exchange<<"-"<<p1.number;
    return 0;
}