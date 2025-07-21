//Name : Dhakshayini Usha R
// PRN : 24070123039
//ENTC A2
#include<iostream>
using namespace std;

int main(){
int d,n;
cout<<"Enter 2 numbers :"<<endl;
cin>>d;
cin>>n;

//AND
cout<<"And :"<< (d&n)<<endl;
//XOR
cout<<"XOR :"<<(d^n)<<endl;
//OR
cout<<"OR :"<<(d|n)<<endl;
//Left Shift
cout<<"Left Shift :"<<(d<<2)<<endl;
//Right Shift
cout<<"Right Shift :"<<(d>>2)<<endl;
//NOT
cout<<"NOT :"<<(~n)<<endl;

return 0;
}

/*Sample Output
Enter a number to be set: 
33
Enter the position of bit to be set: 
4
Enter a number to be reset: 
44
Enter the position of bit to be reset: 
5
Set number: 49
Reset number: 12
*/
