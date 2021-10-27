//145 is a strong number because
//1! + 4! + 5! = 1 + 24 + 120 = 145

#include <iostream>
using namespace std;

int main()
{
    int n,no;
    cout<<"\n enter number: "; 
    cin>>no;
    cout<<"\n strong numbers from 1 to "<<no<<" are : ";
    
for(int n=1;n<=no;n++)
{
    int num=n,d,sum=0,fact;
    while(num)
    {
        fact=1;
        d=num%10;
        for(int i=d;i>=1;i--)
        fact*=i;
        sum+=fact;
        num=num/10;
    }
    
    if(sum==n)
    cout<<"\n "<<n;
    
}
    return 0;
}
/*
OUTPUT:
enter number: 100000

 strong numbers from 1 to 100000 are :
 1
 2
 145
 40585
 */
