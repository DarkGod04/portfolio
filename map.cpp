#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> directory;
    directory["Naman"]=3456;
    directory["animesh"]=98776;
    directory["nami"]=9876;
    for(auto element:directory){
        cout<<"name-"<<element.first<<endl;
        cout<<"Phone no. -"<<element.second<<endl;
    }
}