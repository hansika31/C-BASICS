/* WAP to input and check if a number is Armstrong or not. */

#include<iostream>
#include<math.h>

using namespace std;

int main(){

int n;


cout<<"ENTER NUMBER"<<endl;
cin>>n;
int sum=0,originaln=n;

while(n>0){
	
	int lastdigit = n%10;
	sum+=pow(lastdigit,3);
	n=n/10;
	
	
}

if(sum==originaln){
	cout<<"ARMSTRONG NUMBER";
	
}
else{
	cout<<"NOT ARMSTRONG";
}
}
