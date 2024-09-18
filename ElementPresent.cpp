#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 6, 8, 4};
    int x = 4;
    int c = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        if (arr[i] == x){
            c++;
        }
    }
    if(c == 1){
        cout<<x<<" Is available in the array"<<endl;
    }
    else{
        cout<<x<<" Is not available in the array"<<endl;
    }
    return 0;
}


