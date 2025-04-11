//counting total number digits
#include<iostream>
using namespace std;

int main(){

    int num,total=0,sum;
    cout<<"enter num1 value";
    cin>>num;

    sum=num;
    while (sum != 0) 
	{
        sum /=10;
        total++;
    }
    cout<<"Total number of digits : " <<total;
    return 0;
}