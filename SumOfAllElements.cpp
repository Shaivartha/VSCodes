#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 6, 1, 8, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    
    for (int i = 0; i < len; i++) {
        sum = sum + arr[i];
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

