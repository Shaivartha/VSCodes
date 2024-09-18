#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 6, 8, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
    }

    arr[3] = 7; 
    cout<<endl;

    for (int j = 0; j < len; j++) {
    cout << arr[j] << " ";
    }
    return 0;
}


