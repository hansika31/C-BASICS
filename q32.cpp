/*WAP to input n numbers & print the maximum of n numbers.*/

#include<iostream>

using namespace std;

int main(){


int n ,i, a[50];

int max =a[0];


cout<<"HOW MANY NUMBERS YOU WANT TO CHECK";
cin>>n;

cout<<"ENTER NUMBERS";
for(i=0;i<n;i++){
	
	cin>>a[i];
}

for(i=0;i<n;i++){
	
	if(max<a[i]){
		max=a[i];
	}
	
}

cout<<"MAXIMUM NUMBER IS "<<max;
	
	
}



