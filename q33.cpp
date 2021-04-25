/*WAP to input n numbers & print the minimum of n numbers.*/

#include<iostream>

using namespace std;

int main(){


int n ,i, a[10];

int min =a[0];


cout<<"HOW MANY NUMBERS YOU WANT TO CHECK";
cin>>n;

cout<<"ENTER NUMBERS";
for(i=0;i<n;i++){
	
	cin>>a[i];
}

for(i=0;i<n;i++){
	
	if(min>a[i]){
		min=a[i];
	}
	
}

cout<<"MINIMUM NUMBER IS "<<min;
		
}

