#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"the size of array  is :- "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
}
bool search(int arr[],int n,int key){print(arr,n);
    if(n==0)return false;
    if(arr[0]==key)return true;
    return search(arr+1,n-1,key);

}
int main(){int arr[]={1,2,3,4,5,6,7,8,9},n=9,key=4;
search(arr,n,key)?cout<<"true":cout<<"false";

}