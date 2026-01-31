#include<iostream>
using namespace std;
int getsum(int *arr,int n){
    if(n==0)return 0 ;  
    if(n==1)return arr[0] ;//int sum=0;
    arr[1]+=arr[0];
    return getsum(arr+1,n-1);
    //cout<<"the value of sum is :- "<<sum<<endl;
    }
int main(){int arr[]={10,20,30,40,50,60,70,80,90,100};int n =10;int s=0;
cout<<getsum(arr,n);

}