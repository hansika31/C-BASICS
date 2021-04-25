/*  /WAP to accept the percentage of a student and print v.good if m>90 , good m>80 ,
average >60 and fair >45 else fail. */

#include<iostream>

using namespace std;

int main(){

int p;
cout<<"ENTER YOUR PERCENTAGE";

cin>>p;

if(p>90){
	
	cout<<"VERY GOOD"<<endl;
	
	
}
else if(p<90 && p>80){
	cout<<"GOOD"<<endl;
	
}

else if(p<80 && p>60){
	
	cout<<"AVERAGE"<<endl;
	
	
}	

else if ( p<60 && p>45){
	
	cout<<"FAIR"<<endl;
}

else{
	
	cout<<"FAIL"<<endl;
}
}
