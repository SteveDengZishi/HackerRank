/*
To determine if there exists an element in the array such that the sum of the elements on its left is equal to the sum of the elements on its right.
For each test case print YES if there exists an element in the array, such that the sum of the elements on its left is equal to the sum of the elements on its right; otherwise print NO.

Sample Input 0

2
3
1 2 3
4
1 2 3 3
Sample Output 0

NO
YES

*/

#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    // Complete this function
    string result="NO";
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
    }
    int curSum=0;
    for(int i=0;i<a.size();i++){
        int sumLeft=curSum;
        curSum+=a[i];
        int sumRight=sum-curSum;
        if(sumLeft==sumRight) result="YES";
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}


