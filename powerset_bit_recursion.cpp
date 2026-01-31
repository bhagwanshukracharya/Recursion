#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateSubsets(vector<int> input,int index,vector<int> output, vector<vector<int>>& ans) {
    if(index>=(1<<input.size())){ return;}
    // Iterate through all numbers from 0 to 2^n - 1
    // For each bit in mask, check if it is set (1) or not (0)
        for (int i = 0; i < input.size(); i++) {
            if (index & (1 << i)) {  // If the ith bit is set, include input[i]
                output.push_back(input[i]);
            }
        }ans.push_back(output);
        output.clear();        
        generateSubsets(input,index+1,output,ans);
         // Add the subset to the result
    
}

int main() {
    vector<int> input{1,2,3},output;int index=0;
    vector<vector<int>>ans;
    
    generateSubsets(input,index,output,ans);
    
    // Output all subsets
    //cout<<endl<<endl;
    cout<<"{";
 for(int i=0;i<ans.size();i++)
        {cout<<"{";
            for(int j=0;j<ans[i].size();j++)
            {cout<<ans[i][j];}cout<<" }";
                }cout<<"}";
    //cout<<"1<<n -> "<<(1<<1);

    return 0;
}
