#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
bool isanagram(string s){
    unordered_map<string,int> m;
    for(auto str:s){
        m[str]++;
    }
    for(auto ele:m){
        if(ele.second%2!=0){
            return false;
        }
        return true;
    }
}
int  main(){
    string str1,str2,str3;
    cin>>str1;
    cin>>str2;
    str3=str1+str2;
    cout<<(isanagram(str3)? "True":"False");
}