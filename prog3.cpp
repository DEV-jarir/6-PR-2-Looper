//sum of first digit and last digit//
#include<iostream>
using namespace std;

int main(){
    int num, first_digit,last_digit,sum;
    cout<<"Enter num value: ";
    cin>>num;
 
    last_digit=num%10;
    while(num>=10){
        num/=10;
    }
    first_digit=num;
    sum=first_digit+last_digit;
    cout<<" The sum of firstdigit and last digit:"<<sum;

    return 0;
}