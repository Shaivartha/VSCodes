#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {2, 3, 6, 1, 8, 4};
    int smallest = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);

    // Traverse the array to find the largest element
    for (int i = 1; i < len; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Output the smallest element
    cout << "The smallest element is: " << smallest << endl;
    return 0;

}













