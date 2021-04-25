/* WAP to input and check whether a number is palindrome or not.*/

#include<iostream>

using namespace std;

int main(){
	
	int n,reverse=0;
	cout<<"ENTER NUMBER"<<endl;
	cin>>n;n%
	int originaln=n;
	
	while(n>0){
		int lastdigit= n%10;
		
		reverse= reverse*10 + lastdigit;
		
		n=n/10;
		
	}
	
	
	if(originaln==reverse){
		
		cout<<"PALINDROME";
	}
	
	else{
	cout<<"NOT PALINDROME";
	}
		
		
}
