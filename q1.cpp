/*1.WAP to accept two numbers and print their addition if any of the two numbers is
divisible by 5 , if not then print their multiplication.*/

#include<iostream>


using namespace std;

int main()
{
    int a,b;
    
    cout<<"ENTER TWO NUMBERS";
    cin>>a>>b;
    


    if(a%5==0||b%5==0){
        cout<<(a+b);
    }
    else{
        cout<<(a*b);
    }
    return 0 ;

}
