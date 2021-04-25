/*WAP to print even numbers between 1-10000.*/

#include<iostream>

using namespace std;

int main(){
	int i;
	for(i=1;i<= 10000; i++){
		
		if(i % 2 == 0){
			
			cout<<i<<"  ";
		}
		
	}
}
