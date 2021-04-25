/* WAP to print all Armstrong number in between 1-100000.*/

#include<iostream>
#include<math.h>

using namespace std;


int main(){
	
	int n;
	int sum=0;
	
	for(n=1;n<=100000;n++){
		
		int originaln=n;
		while(n>0){
			
			int lastdigit= n%10;
			sum+= pow(lastdigit,3);
			n=n/10;
				
		}
		
		if(originaln==sum){
			
			cout<<originaln<<" ";
		}
	}
	
}
