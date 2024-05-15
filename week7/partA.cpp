#include<bits/stdc++.h>
using namespace std;
void printSize(int* arr)
{
    cout << sizeof(arr) << endl;
}
void printSizeFixed(int arr[10])
{
    cout << sizeof(arr) << endl;
}
int count_even(int* arr, int size)
{
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
int binarySearch(int* start, int* end, int x)
{
    if (start <= end)
    {
        int* mid = start + (end - start) / 2;
        if (*mid == x)
        {
            return mid - start;
        }
        if (*mid > x)
        {
            return binarySearch(start, mid - 1, x);
        }
        return binarySearch(mid + 1, end, x);
    }
    return -1;
}
char* weird_string()
{
    char c[]="12345";
    return c;
}
int countOccurrences(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count = 0;
    for (int i = 0; i <= len2 - len1; i++) {
        if (strncmp(str2 + i, str1, len1) == 0) {
            count++;
        }
    }
    return count;
}
int main()
{
    int A[10];
    cout << sizeof(A) << endl;
    printSize(A);
    printSizeFixed(A);
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << count_even(A, 5) << endl;
    cout << count_even(A + 5, 5) << endl;
//    cout<<weird_string()<<endl;
// lỗi trả về con trỏ đến 1 biến cục bộ( sẽ bị huỷ đi khi hàm kết thúc)

    return 0;
}
