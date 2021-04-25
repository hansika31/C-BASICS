/* WAP to input a number and print its digit sum.*/

#include<iostream>

using namespace std;

int main(){
	
	int n;
	int sum=0;
	cout<<"ENTER NUMBER"<<endl;
	cin>>n;
	
	while(n>0){
		
		int k=n%10;
		sum+=k;
		n=n/10;
		
	}
	
	cout<<sum;
}
