#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string feeOrUpfront(int n, int k, int x, int d, vector <int> p) {
    // Complete this function
    int fee=0;
    int upFront=d;
    for(int i=0;i<n;i++){
        fee+=max((double)k,x*0.01*p[i]);
    }
    cout<<fee<<" "<<upFront<<endl;
    if(fee<=upFront){
        return "fee";
    }
    else return "upfront";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int k;
        int x;
        int d;
        cin >> n >> k >> x >> d;
        vector<int> p(n);
        for(int p_i = 0; p_i < n; p_i++){
           cin >> p[p_i];
        }
        string result = feeOrUpfront(n, k, x, d, p);
        cout << result << endl;
    }
    return 0;
}
