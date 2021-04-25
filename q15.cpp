/*WAP to input a number and check its prime or not.*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int n;
	bool flag=0;
	cout<<"ENTER NUMBER"<<endl;
	cin>>n;
	
	for(int i=2;i<=sqrt(n);i++){
		
		if(n%i==0){
			cout<<"NOT PRIME"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"PRIME"<<endl;
	}
}
