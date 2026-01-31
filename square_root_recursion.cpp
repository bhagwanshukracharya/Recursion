#include<iostream>
using namespace std;
int whole(int n,int s,int e,int temp){
    if(s>e)return temp;
        int mid=s+(e-s)/2;
        if(mid*mid==n)return mid;
        if(mid*mid<=n)return whole(n,mid+1,e,mid);
        if(mid*mid>n)return whole(n,s,mid-1,temp);
    
}
double sol(int n,double temp,int i,int p,double f){double ans=temp;
    if(i>=p)return ans;
    f=f/10;
        for(double j=ans;j*j<=n;j=j+f){
            ans=j;
        }return sol(n,ans,i+1,p,f);
    } 
    int main(){
    int n=37;cout<<sol(n,whole(n,0,n-1,0),0,4,1);
}