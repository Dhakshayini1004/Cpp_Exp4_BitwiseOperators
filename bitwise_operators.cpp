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
Enter 2 numbers :
33
55
And :33
XOR :22
OR :55
Left Shift :132
Right Shift :8
NOT :-56
*/
