#include<bits/stdc++.h>
using namespace std;
int a[5];
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
void sapxep(int a[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
int main()
{
    int b[4];
    int a1[3]={1,2,3,4};
    int a2[5]={1,2,3,4};
    int a3[]={1,2,3,4};for (int i=0;i<(int)sizeof(a);i++)
    {
        cout<<a[i];
    }
    cout<<endl<<sizeof(a1)<<endl;
    cout<<a1<<endl;
    for (int i=0;i<(int)sizeof(a1);i++)
    {
        cout<<a[i];
    }
    // char a1[];
    // char a[1] = “abcd";
    // char a[4] = “abcd"
     char a[6] = "abcd";
     char a11[]="abcd";
     int daytab[2][12] ={
{31,28,31,30,31,30,31,31},
{31,29,31,30,31,30,31,31,30,31,30,31}
};
    int dayTab[][12] = {
  31,28,31,30,31,30,31,31,30,
  31,29,31,30,31,30,31,31,30,31,30,31
};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
    int a[4]={1,2,3,4};
    //cout<<a[-1]; in ra 0;
    //cout<<a[4]; in ra 1;
    //cout<<a[5]; in ra 0;
    int arr[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            arr[i][j] = 99;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
