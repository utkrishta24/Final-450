// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        int temp[n];
        int l=0,i=0;
        while(i<n)
        {
            if(arr[i]-k>0){
            temp[l]=arr[i]-k;
            l++;
            }
            arr[i]=arr[i]+k;
            i++;
        }
        sort(arr,arr+n);
        sort(temp,temp+l);
        int x=min(arr[0],temp[0]);
        int y=min(arr[n-1],temp[l-1]);
    return (y-x);
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends