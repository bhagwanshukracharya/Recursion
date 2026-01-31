#include<iostream>
using namespace std;
void reverse(int arr[],int s,int  e){
    if(s>e)return
        swap(arr[s],arr[e]);
        reverse(arr,++s,--e);} 

int main(){int arr[]={1,2,3,6,5,4},s=3,e=5;
reverse(arr,s,e);
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";}
}