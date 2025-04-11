//skipping alphabet

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter Any Alphabet: ";
    cin>>ch;
    do{
     ch+=4;
     cout<<ch<<endl;   
    }
    while(ch>'a' && ch<'z');
    
    return 0;
}