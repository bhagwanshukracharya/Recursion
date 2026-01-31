#include<iostream>
#include<vector>
using namespace std;
void phone(string input,int index,string *arr,string output,vector<string>&ans){
    if(index>=input.length()){ans.push_back(output);return;}
    int c1=input[index]-'0';
    string s1=arr[c1];
    for(int i=0;i<s1.length();i++){
        output.push_back(s1[i]);
        phone(input,index+1,arr,output,ans);
        output.pop_back();

        }
    }

int main(){string input="23";int index=0;string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string output="";vector<string>ans;
phone(input,index,arr,output,ans);cout<<"{";
 for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {cout<<ans[i][j];}cout<<" ";
                }cout<<"}";

}