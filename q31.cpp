/*WAP to input n numbers & print it.(using arrays)*/


#include<iostream>

using namespace std;


int main(){
	
	int a[5],n;
	
	cout<<"ENTER HOW MANY NUMBERS YOU WANT TO ENTER";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	
	
	
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<endl;
	}
	

}

