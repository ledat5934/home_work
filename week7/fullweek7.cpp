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
int main()
{
    char s[]="abc";
    reverse1(s);
    cout<<s;
}
