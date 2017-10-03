//
//  tree_max_path_leet.cpp
//  HackerRankQ
//
//  Created by Steve DengZishi on 9/30/17.
//  Copyright © 2017 Steve DengZishi. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    int recursiveMax(TreeNode* node,int length){
        if(node!=nullptr){
            length++;
            int leftMax=recursiveMax(node->left, length);
            int rightMax=recursiveMax(node->right, length);
            return max(leftMax,rightMax);
        }
        else{return length;}
    }
    int longestPath(TreeNode* root) {
        int length=-1;
        return recursiveMax(root,length);
    }
};
