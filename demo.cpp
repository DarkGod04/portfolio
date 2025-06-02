//desoign develop a program in c for the following operation on searching and sorting 
//a perform lenear seach and binarty search b perform bubble sort c selection sort d insertion sort 
//design devolp and implement a program in c for the following operations:
//of student data with the feild name branch phone no. 
// 1, crrate a sinmgler linked list of n stuent by usinmg front insertion 
//2. display th estautus of ther linked list and acount the numeber opf nodes .
// 3. perfornm insertion and deletion aty the end of sigly linked list 
//4. exit.
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;m;
    int arr[n][m];
    for(int i=0 ;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int ar[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ar[i][j]==arr[j][i];
            cout<<ar[i][j];
        }
    }

}
