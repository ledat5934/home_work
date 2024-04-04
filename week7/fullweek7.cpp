#include<bits/stdc++.h>
using namespace std;
void reverse1(char* a) {
    char* start = a;
    char* end = a + strlen(a) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
void delete_char(char *a, char c)
{
    int i=0,j=0;
    while(a[i])
    {
        if(a[i]!=c)
        {
            a[j++]=a[i];
        }
        i++;
    }
    a[j]='\0';
}
void pad_right(char *a,int n)
{
    int l=strlen(a);
    if(l>=n)
    {
        return ;
    }
    for(int i=l;i<n;i++)
    {
        a[i]=' ';
    }
    a[n]='\0';
}
void pad_left(char *a,int n)
{
    int l=strlen(a);
    if(l>=n)
    {
        return ;
    }
    int k=n-l;
    for(int h=n-1;h>=k;h--)
    {
        a[h]=a[h-k];
    }
    for(int i=0;i<k;i++)
    {
        a[i]=' ';
    }
    a[n]='\0';
}
void truncate(char* a, int n)
{
    int l=strlen(a);
    if(l<=n)
    {
        return ;
    }
    a[n]='\0';
}
bool is_palindrome(char *a)
{
    int i=0;
    int j=strlen(a)-1;
    while(i<=j)
    {
        if(a[i]!=a[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void trim_left(char *a)
{
    int i=0;
    while(a[i]==' ')
    {
        i++;
    }
    int l=strlen(a);
    for(int j=0;j<l-i;j++)
    {
        a[j]=a[j+i];
    }
    a[l-i]='\0';
}
void trim_right(char* a)
{
    int i=strlen(a);
    while(a[i]==' ')
    {
        i--;
    }
    a[i]='\0';
}
int main()
{
    char s[]="abc";
    reverse1(s);
    cout<<s;
    cout<<endl;
    delete_char(s,'a');
    cout<<s;
}
