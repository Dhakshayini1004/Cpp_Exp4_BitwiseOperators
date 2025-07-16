//Name : Dhakshayini Usha R
// PRN : 24070123039
//ENTC A2
#include<iostream>
using namespace std;

int main(){
int num,Bit;
cout<<"Enter a number to be reset: "<<endl;
cin>>num;

//Bit position
cout<<"Enter the position of bit to be reset: "<<endl;
cin>>Bit;

//Boundary condition
if(Bit>7 | num>128){
    cout<<"Invalid"<<endl;
    exit(0);
}

cout<<"Reset number: "<<(num & (~(1<<Bit)))<<endl;
return 0;
}
