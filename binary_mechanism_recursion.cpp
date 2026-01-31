#include<iostream>
using namespace std;
void print (int arr[],int s,int e,int mid){
    cout<<"current array:- "<<endl;
    for(int i= s;i<=e;i++)cout<<arr[i]<<"  ";
    cout<<endl;
    cout<<"the index of mid is:- "<<mid<<endl;
    cout<<"the value of mid is:- "<<arr[mid]<<endl;
    
}
bool BS(int*arr,int s,int e,int key){
    if(s>e)return false;
    int mid=s+(e-s)/2;print(arr,s,e,mid);    
    if(arr[mid]==key)return true;        
        
        if(arr[mid]>key){
             return BS(arr,s,mid-1,key);
        }
        if(arr[mid]<key){
            return BS(arr,mid+1,e,key);
        }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9},s=0,e=8,key=1;
    if(BS(arr,s,e,key))cout<<"no. is found!!"<<endl;
    else cout<<"no. not found!!"<<endl;
}