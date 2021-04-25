/*WAP to input a string and print number of vowels.*/


#include<iostream>

using namespace std;

int main(){
	
	char s[100];
	
	int vowel=0,i;
	cout<<"ENTER STRING "<<endl;
	cin.getline(s,100);
	
	for(s[i]=0; s[i]<'.';i++){
		
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
           s[i]=='o' || s[i]=='u' || s[i]=='A' ||
           s[i]=='E' || s[i]=='I' || s[i]=='O' ||
           s[i]=='U'){
           	
           	vowel=vowel+1;
		   }
		   
	}
	
	cout<<vowel;
	
}
