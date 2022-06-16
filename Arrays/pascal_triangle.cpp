// Problem Link
// https://leetcode.com/problems/pascals-triangle/

#define ll long long

vector<vector<long long int>> printPascal(int n) 
{
    // Write your code here.
    vector<vector<ll>> pascal;
        
    vector<ll> first = {1};
    pascal.push_back(first);

    for(int i=1; i<n; i++) {
        vector<ll> curr;

        curr.push_back(1);

        for(int j=0; j+1<i; j++)
            curr.push_back(pascal[i-1][j] + pascal[i-1][j+1]);

        curr.push_back(1);

        pascal.push_back(curr);
    }

    return pascal;
}
