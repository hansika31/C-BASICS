/*WAP to print the sum of all prime numbers in the range 1-100000*/

#include<iostream>
#include<cmath>

using namespace std;


int main(){
	int sum=0,i,n;
	
	for(int n=1;n<=100000;n++){
		
		for( i=2; i<= sqrt(n);i++){
			
			if(n%i==0){
				break;
				
			}
		
		}
		
		if(i>sqrt(n)){
			cout<<n<<" ";
			sum+=n;
		}
		
}
	
	cout<<"\nSUM="<<" "<<sum;
}
