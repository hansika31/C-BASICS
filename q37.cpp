/*WAP to input a string and check whether its a palindrome or not.*/

#include<iostream>

using namespace std;

int main(){
	
	string s;
	cout<<"ENTER A STRING"<<endl;
	getline(cin,s);

	int i=0;
	int j= s.length() - 1;
	
		if(s[i]==s[j]){
			
			cout<<"PALINDROME STRING"<<endl;
			i++;
			j++;
		}
		else{
			
			cout<<"NOT A PALINDROME STRING"<<endl;
		}
	}
