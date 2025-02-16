#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, org, rem, result=0, dig=0;
    cout<< "Enter a number: ";
    cin>>num;
    org=num;  
    int temp=num;  
    while(temp!=0){
        temp/=10;
        dig++;
    }
    temp=num;  
    while(temp!=0) {
        rem =temp%10;
        result+=pow(rem,dig);
        temp/=10;
    }
    if(result==org){
        cout<<org<< " is an Armstrong number." <<endl;
    } else {
        cout<<org<< " is not an Armstrong number." <<endl;
    }
    return 0;
}
