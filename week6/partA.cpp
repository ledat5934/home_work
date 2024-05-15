#include <bits/stdc++.h>
using namespace std;
int factorial(int x) {
    cout << "x = " << x << " at " << &x << endl;
    if (x == 0) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}
void passByValue(int x) {
    cout << "Inside passByValue, x = " << x << " at " << &x << endl;
}
void passByReference(int &x) {
    cout << "Inside passByReference, x = " << x << " at " << &x << endl;
}
int main()
{
    int a[]={1,2,3};
    char b[]={'a','b','c'};
    for (int i=0;i<=2;i++){
        cout<<&a[i]<<" "<<endl;
    }
    for (int i=0;i<=2;i++){
        cout<<(void*)&b[i]<<" "<<endl;
    }
    factorial(5);
    //kích thước của 1 stack frame trong trường hợp này là 30 byte
    return 0;
    // đối với mảng int thì mỗi phần tử cách nhau 4 byte mảng char thì cách nhau 1 byte
}
