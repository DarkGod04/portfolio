#include<iostream>
#include <algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool frequency(vector<int> r){
    unordered_set<int>set;
    for(int i=0; i<r.size(); i++)
    {
        set.insert(r[i]);
        if(set.size()!=(i+1))
            return true;
    }
    if(set.size()==r.size())
        return false;
    return true;
    // unordered_map<int,int> mp;
    // for(int i:r){
    //     mp[i]++;
    // }
    
    // for(auto n:mp){
    //     if(n.second>1){
            
    //         return true;
    //     }
    // }
    // return false;

}
int main(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<frequency(v);
    if(frequency(v)){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}

