#include<iostream>
using namespace std;

bool pos(int arr[],int k,int mid,int n,int s ){
    int lengthsum=0;int count=1;
    for(int i=0;i<n;i++){
    if(lengthsum+arr[i]<=mid)lengthsum+=arr[i];
    else{count++;
        lengthsum=arr[i];
        if(count>k || arr[i]>mid)return false;
        }
}return true;
}
int painter(int *arr,int k,int n,int s,int e,int ans){
    if(s>e)return ans;
    int mid=s+(e-s)/2;
    if(pos(arr,k,mid,n,s))return painter(arr,k,n,s,mid-1,mid);
    else return painter(arr,k,n,mid+1,e,ans);
    }

int main(){int arr[]={4,6,10,12,13},k=2,s=0,e=45,ans=-1;
cout<<painter(arr,k,5,s,e,ans)<<endl;

}