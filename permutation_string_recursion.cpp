#include<iostream>
#include<vector>
using namespace std;
void permu(string input,int index,vector<string>&ans){
    if(index>=input.length()){ans.push_back(input);return;}
    for(int i=index;i<input.length();i++){
        swap(input[index],input[i]);
        permu(input,index+1,ans);
        swap(input[index],input[i]);
    }
}
int main(){string input="abc";int index=0;vector<string>ans;
    permu(input,index,ans);cout<<"{";
 for(int i=0;i<ans.size();i++){for(int j=0;j<ans[i].size();j++){cout<<ans[i][j];}cout<<" ";}cout<<"}";
}