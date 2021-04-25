/*A
B B
C C C
D D D D
E E E E E*/

#include<iostream>

using namespace std;

int main(){
	
	char p='A';
	for(int i= 1; i<=5; i++){
		
		for(int j= 1; j <= i;j++){
			
			cout<<p<<"\t";
		}
		
		p++;
		
		cout<<endl;
	}
}
