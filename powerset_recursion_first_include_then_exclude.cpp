#include<iostream>
#include<vector>
using namespace std;
void power(vector<int>input,vector<int>output,int index,vector<vector<int>>&ans){
    if(index>=input.size()){ans.push_back(output);return;}
    
    output.push_back(input[index]);
    power(input,output,index+1,ans);
    output.pop_back();
    power(input,output,index+1,ans);
   
}
int main (){
    vector<int>input={1,2,3},output;int index=0;vector<vector<int>>ans;
    power(input,output,index,ans);
     for(int i=0;i<ans.size();i++){cout<<"{ ";for(int j=0;j<ans[i].size();j++){cout<<ans[i][j]<<" ";}cout<<"}"<<endl;}
}