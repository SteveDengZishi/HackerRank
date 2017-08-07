/*Numeros, the Artist, had two lists  and , such that  was a permutation of . Numeros was very proud of these lists. Unfortunately, while transporting them from one exhibition to another, some numbers were left out of . Can you find the missing numbers?

Notes

If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
You have to print all the missing numbers in ascending order.
Print each missing number once, even if it is missing multiple times.
The difference between maximum and minimum number in  is less than or equal to .
Input Format

There will be four lines of input:

 - the size of the first list 
This is followed by  space-separated integers that make up the first list. 
 - the size of the second list 
This is followed by  space-separated integers that make up the second list.

Constraints





Output Format

Output the missing numbers in ascending order.

Sample Input

10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204
Sample Output

204 205 206
Explanation

 is present in both arrays. Its frequency in  is , while its frequency in  is . Similarly,  and  occur twice in , but thrice in . So, these three numbers are our output. The rest of the numbers have thesame frequency in both lists.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> vecA;
    vector<int> vecB;
    int x,y;
    cin>>x;
    int a;
    while(x--){
        cin>>a;
        vecA.push_back(a);
    }
    cin>>y;
    while(y--){
        cin>>a;
        vecB.push_back(a);
    }
    sort(vecA.begin(),vecA.end());
    sort(vecB.begin(),vecB.end());
    
    //for loop is not suitable as one should stop moving
    int i=0;
    int j=0;
    int prev=0;
    while(j<vecB.size()){
        if(vecA[i]!=vecB[j]){
            //if it is missing many times, only print once
            if(prev!=vecB[j]){
                prev=vecB[j];
                cout<<vecB[j]<<" ";
            }
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    return 0;
}
