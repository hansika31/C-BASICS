/*WAP to print the sum of all pallindrome numbers in the range 1-100000.*/

#include<iostream>

using namespace std;

int main(){
	
	int lastdigit,reverse=0,sum=0;
	
	for(int n = 1;n <= 100 ; n++){
	  
	  int originaln = n;	
		
		
		 while(n>0){
		 
		 lastdigit=n%10;
		 reverse= reverse*10 + lastdigit;
		 n=n/10;
	
 	 if(originaln==reverse){
		 
		 	
		 	cout<<".";
		 }
		 
		 }
	}
	
	cout<<sum;
}

