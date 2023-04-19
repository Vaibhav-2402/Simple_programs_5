#include<iostream>
using namespace std;

struct dista
{
    int feet;
    float inches;
};

struct dimen
{
    dista length;
    dista breadth;
    dista height;
};

int main()
{
    dimen room1 = {{10,6},{15,8},{20,10}};
    float l,b,h;
    float volume;
    l=room1.length.feet+room1.length.inches/12;
    b=room1.breadth.feet+room1.breadth.inches/12;
    h=room1.height.feet+room1.height.inches/12;
    volume=l*b*h;
    cout<<"\n volume of room1 is: "<<volume<<endl;
     return 0;
}
