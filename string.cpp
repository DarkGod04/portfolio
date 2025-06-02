#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string Decodedstring(string s){
    string result=""; 
    //TRVERSING IN THE ENCODED STRING 
    for (int i=0;i<s.length();i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            //extrct str from result
            string str="";
            while(!result.empty() && result.back()){
                str.push_back(result.back());
                result.pop_back();
            }
            //reversing the string
            reverse(str.begin(),str.end());
            //removing the last char from the result which is [
            result.pop_back();
            //extract num from result
            string num="";
            while(!result.empty() && result.back()>='0' && result.back()<=9){
                num.push_back(result.back());
                result.pop_back();
            }
            //reversing the num
            reverse(num.begin(),num.end());
            //convert string to integer
            int int_num=stoi(num);
            //inserting str in result int_num times
            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }
    return result;
}
int main(){
    string str;
    cin>>str;
    cout<<Decodedstring(str)<<endl;
    return 0;
}