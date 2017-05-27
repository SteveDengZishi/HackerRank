/*
 Given a sequence of integers(mostly appear twice), find the integer that appears only once.
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
#include <unordered_map>
#include <cstring>
using namespace std;

int arr[100];

int lonelyinteger(vector <int> a) {
    
    vector<int>::iterator itr1=a.begin();
    vector<int>::iterator itr2=a.end();
    
    for(itr1;itr1!=itr2;itr1++){
        arr[*itr1]++;
    }
    
    for(int i=0;i<100;i++){
        if(arr[i]==1) return i;
    }
    return 0;
}

int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _a;
    
    memset(arr,0,sizeof(arr));//include <cstring> to use memset();
    int _a_item;
    
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
