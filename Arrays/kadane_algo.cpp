// Problem Link
// https://leetcode.com/problems/maximum-subarray/

long long maxSubarraySum(int arr[], int n)
{
    int maxSum=0, currSum=arr[0];
    
    for(int i=1; i<n; i++){
        currSum = max(currSum+arr[i], arr[i]);
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;
}