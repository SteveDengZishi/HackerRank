//
//  leet.cpp
//  HackerRankQ
//
//  Created by Steve DengZishi on 9/30/17.
//  Copyright © 2017 Steve DengZishi. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

class Solution {
public:
    bool checkLength(string A, string B){
        return A.length()<(2*B.length());
    }
    
    
    int repeatedStringMatch(string A, string B) {
        int cnt=1;
        bool matched=false;
        int lenA=A.length();
        int lenB=B.length();
        int ratio1=lenB/lenA;
        int ratio2=2*lenB/lenA;
        string tmp=A;
        
        if(lenA<lenB){
            for(int i=0;i<ratio2-1;i++){
                tmp+=A;
            }
            
            size_t pos = tmp.find(B);
            if(pos!=std::string::npos){
                tmp=A;
                for(int i=0;i<ratio1-1;i++){
                    tmp+=A;
                    cnt++;
                }
            }
            else return -1;
        }
        
        while(checkLength(tmp,B) || cnt<=2){
            size_t pos = tmp.find(B);
            if(pos!=std::string::npos){
                matched=true;
                break;
            }
            else {
                tmp+=A;
                cnt++;
            }
        }
        if(matched) return cnt;
        else return -1;
    }
};
