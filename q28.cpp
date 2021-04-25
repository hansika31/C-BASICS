/* WAP to input a number and print the number of prime digits in it .(since 271895
contains 3 primes (2,7,5))
e.g input- 271895
output-3 */

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int n,i,k;
	int p=0;
	cout<<"ENTER NUMBER"<<endl;
	cin>>n;
	
	while(n>0){
		
		k = n%10;
		
		for(i=2; i<= sqrt(k) ; i++ ){
			
			if(k%i==0){
				break;
			}
			
			if(i > sqrt(k)){
			}
				
				p++;
			}
		
		
		n= n/10;
	}
	
	cout<<p;
			
		
	}
		
	
 
