#include <iostream>
using namespace std;
int main()
{
    int num,rev=0,rem, org;
    cout << "Enter a number: ";
    cin >> num;
    org=num;
    while (num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if (org == rev){
        cout <<org<<" is a palindrome." <<endl;
    }else{
        cout <<org<<" is not a palindrome."<<endl;
    }
    return 0;
}
