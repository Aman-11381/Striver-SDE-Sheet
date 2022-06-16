// Problem Link
// https://leetcode.com/problems/next-permutation/

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    
    int ind1=-1, ind2=-1;
    
    for(int i=n-2; i>=0; i--){
        if(p[i]<p[i+1]){
            ind1 = i;
            break;
        }
    }
    
    if(ind1 == -1){
        int i = 0, j = n-1;
        while(i<j)
            swap(p[i++], p[j--]);

        return p;
    };
    
    for(int i=n-1; i>ind1; i--){
        if(p[i]>p[ind1]){
            ind2 = i;
            break;
        }
    }
    
    swap(p[ind1], p[ind2]);
    
    int i = ind1+1, j = n-1;
    while(i<j)
        swap(p[i++], p[j--]);
    
    return p;
}