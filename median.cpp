/*
finding the median among the imput
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int* array;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>n;
    array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sort(array,array+n);
    cout<<array[(n-1)/2]<<endl;
    return 0;
}
