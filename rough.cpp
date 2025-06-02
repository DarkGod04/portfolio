#include<bits/stdc++.h>
using namespace std;

int avg(int n, int k) { return n/k; }

int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int n = arr.size();
        int sum = 0;
        int count = 0;

        for(int i=0;i<k;i++) sum+=arr[i];
        int average = avg(sum,k);
        if(average >= threshold) count++;
        
        int i=1;
        int j=k;
        while(j<n){
            sum = sum + arr[j] -arr[i-1];
            average = avg(sum,k);
            if(average>=threshold) count++;
            i++;
            j++;
        }
        return count;
    }

int main(){

    vector<int> v = {11,13,17,23,29,31,7,5,2,3};
    int k = 3;
    int threshold = 5;
    cout<<numOfSubarrays(v,k,threshold);
}