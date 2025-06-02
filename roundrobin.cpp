#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for (int i=0;i<n;i++){
    cin>>v[i];
   }
   cout<<"Enter the quary";
   int q;
   cin>>q;
   const int N= 1e5+10;
   vector<int> freq(N,0);
   for( int i=0;i<n;i++){
    freq[v[i]]++;
   } 
   while(q--){
    int querryelement;
    cin>>querryelement;
    cout<<freq[querryelement];
   }
}