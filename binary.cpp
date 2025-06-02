#include<iostream>
#include <algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
    }
    int c2;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            c2=c2+1;
        }
        else{
            cout<<"Wrong input";
        }
    }
    for(int i=0;i<n;i++){
        if(c2%2==0){
            if(v[i]==1){
                v[i]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    
}