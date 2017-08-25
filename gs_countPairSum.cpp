//using a sort + binary search is the most efficient way to match pair of values with a constant sum ordifferences

int countPairs(int k, vector <int> a) {
    int ans=0;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()/2;i++){
        int target=k-a[i];
        if(binary_search(a.begin(),a.end(),target)){
            vector<int>::iterator iterB=lower_bound(a.begin(),a.end(),target);
            vector<int>::iterator iterE=upper_bound(a.begin(),a.end(),target);
	    //try to see whether there are duplicates, if yes there are more than one pairs
            if(iterB!=iterE){
                for(;iterB!=iterE;iterB++) ans++;
            }
            else ans++;
        }
    }
    return ans;
}
