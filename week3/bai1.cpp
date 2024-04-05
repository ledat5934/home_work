#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x,int y;
};
void Print(Point point)
{
    cout<<point.x<<" "<<point.y<<endl;
}
void changeByValue(Point p) {
    p.x += 1;
    p.y += 1;
}

void changeByReference(Point &p) {
    p.x += 1;
    p.y += 1;
}
