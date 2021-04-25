/*WAP to print all multiples of (5 and 10 and 15)(divisible by 5&10&15) in range
1-100000 */

#include<iostream>

using namespace std;

int main(){
	int i;
	for(i=1; i<=100000;i++){
		
		if(i%5==0 && i% 10==0 && i%15 ==0){
			
			cout<<i<<"\t";
		}
	}
}
