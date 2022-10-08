#include<iostream>
using namespace std;
int main(){
    int n,temp=0;
    cin>>n;
    int arr[n+1]={0};

    
        
    

    for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){

// cout<<" for loop i "<<i<<endl;
// cout<<" for loop j "<<j<<endl;
     if(j%i==0){
        if(arr[j]==0){
            arr[j]=1;
        }else
            arr[j]=0;
}

}
temp=0;

system("cls");
for(int i=1;i<=n;i++){
    // cout<<"after"<< arr[i] <<endl;
    // cout<<"count before "<< temp <<endl;
    if(arr[i]==1){

       
        temp++;
        cout<<"open gate "<< i <<endl;
    }
    
}

    }

 cout<<"count "<< temp <<endl;
    
    
    }
