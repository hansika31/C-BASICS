/* WAP to input a number and print only those digits that are divisible by 5. */

#include<iostream>

using namespace std;

int main(){
	
	
	int n;
	cout<<"ENTER NUMBER"<<endl;
	cin>>n;
	
	
	while(n>0){
		
		int k = n % 10;
		
		n=n/10;
	
	if(k % 5==0){
		
		cout<<k<<" ";
		
	}
	
}
}

