/*WAP to print all palindromes between 1-10000.*/

#include<iostream>

using namespace std;

int main(){
	
	int n,reverse=0;
	
	for(n=1;n<=1000;n++){
	
	int originaln=n;	
	
	while(n>0){
		
	int lastdigit = n%10;
		reverse = reverse*10 + lastdigit;
		n=n/10;
	
	}
	
	if(originaln==reverse){
		
		cout<<reverse<<"  "; 
	}
	
	
}
}
