#include<iostream>
using namespace std;
int pivot(int arr[],int s,int e){
    if(s>e)return s;
    int mid=s+(e-s)/2;
         if(arr[mid]>=arr[0])return pivot(arr,mid+1,e);
         if(arr[mid]<arr[0])return pivot(arr, s,mid-1);
    
}
int main(){int arr[]={5,6,7,8,9,10,11,12,1},s=0,e=8;
cout<<pivot(arr,s,e);
}