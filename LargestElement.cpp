#include <iostream>
using namespace std;

int main() {
    
// First Method To Find The Largest Element in an Array

    int arr[] = {1, 2, 3, 6, 8, 4};
    int largest = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);

    // Traverse the array to find the largest element
    for (int i = 1; i < len; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    // Output the largest element
    cout << "The largest element is: " << largest << endl;

// Second Method To Find The Largest Element in an Array

    int c = 0;
    for(int i = 0; i<len; i++){
        c=0;
        for(int j = 0; j<len; j++){
            if(arr[i]>arr[j]){
                c++;
            }
            if(c == len-1){
                cout<<arr[i]<<" is Biggest"<<endl;
            }
        }
    }
    return 0;
}




