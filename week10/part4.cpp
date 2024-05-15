#include<bits/stdc++.h>
using namespace std;
char* reverse(const char*a)
{
    int n=strlen(a);
    char* res=new char[n+1];
    for(int i=0;i<n;i++)
    {
        res[i]=a[n-i-1];
    }
    res[n]='\0';
    return res;
}
char* delete_char(const char*a, char c)
{
    int n=strlen(a);
    char* res=new char[n+1];
    int i=0,j=0;
    while(a[i])
    {
        if(a[i]!=c)
        {
            res[j]=a[i];
            j++;
        }
        i++;
    }
    res[j]='\0';
    return res;
}
char *pad_right(const char*a,int n)
{
    int l=strlen(a);
    if(l>=n)
    {
        char* res=new char[l+1];
        strcpy(res,a);
        return res;
    }
    else
    {
        char* res=new char[n+1];
        strcpy(res,a);
        while(l<n)
        {
            res[l]=' ';
            l++;
        }
        res[n]='\0';
        return res;
    }
}

