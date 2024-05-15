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
Point mid_point(const Point &point1, const Point &point2)
{
    Point mid;
    mid.x=point1.x/2+point2.x/2;
    mid.y=point1.y/2+point2.y/2;
    return mid;
}
struct Rect
{
    int x,y,w,h;
    bool contains(const Point p)
    {
        return p.x>=x&&p.x<=x+h&&p.y>=y&&p.y<=y+w;
    }
};
struct Ship
{
    Rect body;
    string id;
    int dx,dy;
    void move()
    {
        body.x+=dx;
        body.y+=dy;
    }
    void display()
    {
        cout<<body.x<<" "<<body.y<<"\n"<<id<<"\n";
    }
};
int main()
{
    Point p;
    cout<<p<<" "<<p.x<<" "<<p.y<<endl;
    //địa chỉ của p giống với p.x và ngay cạnh p.y(theo kích thước của int);

}
