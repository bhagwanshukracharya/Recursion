#include<iostream>
using namespace std;
bool pos(int *arr,int n,int mid,int stu){
    int pagesum=0;int count=1;
    for(int i=0;i<n;i++){
    if(pagesum+arr[i]<=mid)pagesum+=arr[i];
    else{count++;
        pagesum=arr[i];
        if(count>stu||arr[i]>mid)return false;
    }
}return true;
}


int book(int arr[],int n,int stu,int s,int e,int ans=-1){
    if(s>e)return ans;
        int mid=s+(e-s)/2;
        if(pos(arr,n,mid,stu)){return book(arr,n,stu,s,mid-1,mid);            
        }else return book(arr,n,stu,mid+1,e,ans);
    }

int main(){
int arr[]={12, 34, 67, 90},n=4,s=0,stu=2,e=0;int sum=0;

for(int i=0;i<n;i++){
        sum+=arr[i];
        e=sum;
    }
cout<<book(arr,n,stu,s,e,0);
}