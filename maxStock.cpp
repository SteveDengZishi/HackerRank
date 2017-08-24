#include <bits/stdc++.h>

using namespace std;


long buyMaximumProducts(int n, long k, vector<pair<int,int>> a) {
    // Complete this function
    sort(a.begin(),a.end());
    long stock=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].second;j++){
            if(k-a[i].first>=0){
                k-=a[i].first;
                stock++;
            }
            else break;
        }
    }
    return stock;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> arr;
    for(int arr_i = 0; arr_i < n; arr_i++){
        int val; cin>>val;
        arr.emplace_back(val,arr_i+1);
    }
    
    long k;
    cin >> k;
    long result = buyMaximumProducts(n, k, arr);
    cout << result << endl;
    return 0;
}
