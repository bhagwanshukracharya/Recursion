#include<iostream>
using namespace std;
void bub(int arr[],int n){
    if(n==1)return;
    
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);}
    bub(arr,n-1);
}
int main (){
int arr[]={1,1,1,0,1,1},n=6;
bub(arr,n);
for(int i=0;i<n;i++)cout<<arr[i]<<"  ";
}