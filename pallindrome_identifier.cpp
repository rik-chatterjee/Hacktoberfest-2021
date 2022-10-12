#include<iostream>
using namespace std;
int main(){
       int number,b,reversedNumber=0,remainder;
       cout<<"Enter the number: "; // Taking number as input from user
       cin>>number;
       b=number;
       // Reversing the numeber
       while(number!=0){
           remainder=number%10;
           reversedNumber=reversedNumber*10+remainder;
           number=number/10;
       }
       cout<<"Reversed number is: "<<reversedNumber<<endl;
       //comparing reversed number with original number
       if(reversedNumber==b){
           cout<<"It is a pallindrome";
       }
       else{
         cout<<"It is not a pallindrome";
     }
   return 0;
 }