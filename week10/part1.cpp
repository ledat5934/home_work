#include<bits/stdc++.h>
using namespace std;
const char* concat(const char* s1, const char* s2)
{
    char* tmp=new char[strlen(s1)+strlen(s2)];
    strcpy(tmp,s1);
    strcat(tmp,s2);
    return tmp;
}
int main()
{
    const char* s1="hello";
    const char* s2="world";
    cout<<concat(s1,s2);
}
