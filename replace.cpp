#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> &v){
    int totalsum=0;
    int n;
    for(int i=0;i<n;i++){
        totalsum=totalsum+v[i];
    }
    int prefixsum=0;
    for(int i=0;i<v.size();i++){
        prefixsum=prefixsum+v[i];
        int suffixsum=totalsum-prefixsum;
        if(suffixsum==prefixsum){
            return true;
        }
    }
    return false;
    
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    cout<<check(v);

    cout << endl;

    return 0;
}
