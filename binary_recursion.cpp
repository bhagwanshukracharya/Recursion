#include<iostream>
using namespace  std;
bool  binary(int arr[],int  s,int    e,int  key){
    if(s>e)return  false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)return true;
    if(arr[mid]<key)return binary (arr,mid+1,e,key);
    if(arr[mid]>key)return binary(arr,s,mid-1,key);
    
}
int  main(){
    int arr[6]={1,3,4,7,8,36};int  n=6,key=10;
    cout<<binary(arr,0,n-1,key);
}