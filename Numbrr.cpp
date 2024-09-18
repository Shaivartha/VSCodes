#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter your number : ";
    cin>>n;
    // checking if it's an odd or even no.

    if(n%2 == 0){
        cout<<"It's an even number"<<endl;
    }
    else{
        cout<<"It's an odd number"<<endl;
    }
    // checking if its a prime no.

    int c = 0;
    for(int i = 2; i<=(n-1); i++){
        if(n%i == 0){
            c += 1;
        }  
    }
    if(c == 0){
           cout<<"Its a prime number"<<endl;
        }
    // checking number of digits in a no.

    string str = to_string(n);
    int len = str.length();
    if(len == 1)
    cout<<"Its a single digit number"<<endl;
    else if(len == 2)
    cout<<"Its a double digit number"<<endl;
    else if(len == 3)
    cout<<"Its a triple digit number"<<endl;
    else
    cout<<"Its a more than 3 digit number"<<endl;

    //Calculating table

    for (int j = 1; j<=10; j++){
        cout<<n<<"x"<<j<<" = "<<n*j<<endl;
    }
    return 0;
    
}