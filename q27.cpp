/* WAP to input a number and print the count of digits.*/

#include<iostream>

using namespace std;

int main(){
	int n;
	int count=0;
	cout<<"ENTER NUMBER"<<endl;
	cin>>n;
	
	while(n>0){
		
            int k = n%10;
			n=n/10;
			count++;
		
		
	}
	
	cout<< count;
}
