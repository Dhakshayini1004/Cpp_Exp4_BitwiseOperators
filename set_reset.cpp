//Name : Dhakshayini Usha R
// PRN : 24070123039
//ENTC A2
#include<iostream>
using namespace std;

int main(){
int num1,num2,Bit1,Bit2;
cout<<"Enter a number to be set: "<<endl;
cin>>num1;

//Bit position
cout<<"Enter the position of bit to be set: "<<endl;
cin>>Bit1;

cout<<"Enter a number to be reset: "<<endl;
cin>>num2;

//Bit position
cout<<"Enter the position of bit to be reset: "<<endl;
cin>>Bit2;

//Boundary condition
if(Bit1>7 | num1>128 | Bit2>7 | num2>128){
    cout<<"Invalid"<<endl;
    exit(0);
}

cout<<"Set number: "<<(num1 | (1<<Bit1))<<endl;
cout<<"Reset number: "<<(num2 & (~(1<<Bit2)))<<endl;

return 0;
}
