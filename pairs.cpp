/*
Given N integers, count the number of pairs of integers whose difference is K.

Input Format

The first line contains N and K. 
The second line contains N numbers of the set. All the N numbers are unique.

Constraints

2 <= N <= 10^5
0 < k < 10^9

Each integer will be greater than 0 and at least K smaller than 2^31-1.
Output Format

An integer that tells the number of pairs of integers whose difference is K.

Sample Input

5 2  
1 5 3 4 2  
Sample Output

3
Explanation

There are 3 pairs of integers in the set with a difference of 2.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

int pairs(vector < int > a,int k) {
    int ans=0;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){

	//std::binary_search(start,end,val) return boolean for existence of value
	//std::lower_bound(start,end,val) return iterator for the first appearance
	//std::upper_bound(start,end,val) return iterator for the last appearance

        if(binary_search(a.begin(),a.end(),a[i]+k)){
            ans++;
        }
    }
    return ans;
}

/* Tail starts here */
int main() {
    int res;
    
    int _a_size,_k;
    cin >> _a_size>>_k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = pairs(_a,_k);
    cout << res;
    
    return 0;
}
