#include<bits/stdc++.h>
using namespace std;
int main()
{
     int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;//đã giải phóng bộ nhớ tại vị trí p
    *p2 = 100;//truy cập vào bộ nhớ đã giải phóng=> lỗi
    cout << *p2;
    delete p2;//giải phóng bộ nhớ đã giải phóng=> lỗi

}
