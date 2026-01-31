#include<iostream>
using namespace std;
int lbinary(int *arr,int s,int e,int key,int temp){
    if(s>e)return temp;
        int mid=s+(e-s)/2;
        if(arr[mid]==key){temp=mid;return lbinary(arr,s,mid-1,key,temp);}
        if(arr[mid]<key){return lbinary(arr,mid+1,e,key,temp);}
        if(arr[mid]>key){return lbinary(arr,s,mid-1,key,temp);}
}
int rbinary(int *arr,int s,int e,int key,int temp){
    if(s>e)return temp;
        int mid=s+(e-s)/2;
        if(arr[mid]==key){temp=mid;return rbinary(arr,mid+1,e,key,temp);}
        if(arr[mid]<key){return rbinary(arr,mid+1,e,key,temp);}
        if(arr[mid]>key){return rbinary(arr,s,mid-1,key,temp);}
    
}

int main(){
    int arr[]={1,2,2,2,2,2,2,2,2,2,2,2,2,4,5},s=0,e=14,key=2;int temp=-1;
   cout<<"leftmost index:- "<<lbinary(arr,s,e,key,temp)<<endl;
    cout<<"rightmost index:- "<<rbinary(arr,s,e,key,temp)<<endl;
}