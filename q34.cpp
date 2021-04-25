/*WAP to input n numbers and print their sum using arrays.*/


#include<iostream>
using namespace std;
int main(){
	int n,number;
	int sum=0;
	cout<<"HOW MANY NUMBERS YOU WANT TO ENTER"<<endl;
	cin>>n;
	
	for(int i= 1; i<=n;i++){
		
		cout<<"ENTER "<<i<<" number";
		cin>>number;
		
		sum+= number;
	}
	
	cout<<"sum= "<<sum;
}

