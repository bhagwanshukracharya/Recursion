#include<iostream>
using namespace std;
int peak(int *arr,int s,int e){
    if(s>e)return s;int mid=s+(e-s)/2;
    if(arr[mid]>arr[mid+1])return peak(arr,s,mid-1);
    if(arr[mid]<arr[mid+1])return peak(arr,mid+1,e);
}
int main(){int arr[]={7,8,9,6,5,4,3,2,1,0},s=0,e=9;
cout<<"the peak index is :- "<<peak(arr,s,e);
}