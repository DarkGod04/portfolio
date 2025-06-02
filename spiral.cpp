#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int rectanglesum(vector<vector<int>> &matrix,int l1,int l2, int r1,int r2 ){
    int sum=0;
    for(int i=0;i<matrix.size();i++){
        for(int j=1;j<matrix[i].size();i++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
            cout<<matrix[i][j]<<endl;
        }
    }
}
int main(){
    int n,m;
    int r1;
    int r2;
    int l1;
    int l2;
    cin>>n>>m;
    cin>>r1>>r2>>l1>>l2;
    vector<vector<int>> ma;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ma[i][j];
        }
    }
    cout<<"Matrix is as follow";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ma[i][j]<<endl;
        }
    }
    int sum=rectanglesum((ma,l1,l2,r1,r2));
    cout<<sum<<endl;
}