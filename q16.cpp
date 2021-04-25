/*WAP to print all primes between 1-100000.*/
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int i,j;
	
	for(i = 1 ; i <=  100000; i++){
		
		for(j = 2 ; j <= sqrt(i);j++ ){
			
			if(i%j==0){
				break;
			}
		}
		
		if(j>sqrt(i)){
			
			cout<<i<<" ";
		}
	}
}
	
	
		
	
