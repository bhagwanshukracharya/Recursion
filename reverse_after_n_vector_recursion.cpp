#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse(vector<int>a,int m,int e){
    if(m>e)return a;
    swap(a[m++],a[e--]);
    return reverse(a,m,e);
    }
    int main(){
        vector<int>a={1,2,3,9,8,7,6,5,4};int m=3,e=a.size()-1;
        vector<int>ans=reverse(a,m,e);
        for(auto i :ans)cout<<i<<"  ";
    }
