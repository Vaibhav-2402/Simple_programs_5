#include<iostream>
using namespace std;
struct coord
{
    int x;
    int y;
};
int main()
{
    coord c1,c2,c3;
    cout<<"\n Enter first co-ordinates: ";
    cin>>c1.x>>c1.y;
    cout<<"\n Enter second co-ordinates: ";
    cin>>c2.x>>c2.y;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    cout<<"\n co=ordinates after sum is: "<<c3.x<<" ,"<<c3.y;

    return 0;
}