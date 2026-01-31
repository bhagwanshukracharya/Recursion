#include<iostream>
using namespace std;
void Insertion(int *arr,int n,int i=1){
    if(i==n)return;
    //if(arr[0]<arr[1])return;
    {//int i=1;
        int temp=arr[i];int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp)
                arr[j+1]=arr[j];
            else
            break;

        }arr[j+1]=temp;
        Insertion(arr,n,i+1);
    }
   
}
int main(){
        int arr[]={10,4,5,3,11},n=5;int i=1;
        
        Insertion(arr,n,i);
         cout<<"sorted arry is :- "<<endl;
    for(int i=0;i<n;i++)cout<<arr[i]<<"  ";
}