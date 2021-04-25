/*WAP to print all multiples of 5 in range 1-1000*/

#include<iostream>

using namespace std;

int main(){
	int i;
	for(i=1;i<=1000;i++){
		
		if(i%5==0){
			cout<<i<<" ";
		}
	}
}
