#include<iostream>
using namespace std;
bool binary(int *arr,int s,int e,int key){
    if(s>e)return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)return true;
    if(arr[mid]>key)return binary(arr,s,mid-1,key);
    if(arr[mid]<key)return binary(arr,mid+1,e,key);
}
int pivot(int arr[],int s,int e){
    if(s>e)return s;
    int mid=s+(e-s)/2;
    if(arr[mid]>=arr[0])return pivot(arr,mid+1,e);
    if(arr[mid]<arr[0])return pivot(arr,s,mid-1);
}
int main(){
    int arr[]={5,6,7,8,9,1,2,3,4},s=0,e=8,key=8;
    int p=pivot(arr,s,e);
    if(arr[p]==key){cout<<true;return 0;}
    else if(arr[p]<key&&key<arr[e])cout<< binary(arr,p+1,e,key);
    else cout<<binary(arr,s,p,key);
}