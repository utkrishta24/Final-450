// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
{
	// By doing this, we replace every element with the maximum index we could reach through it.
    for (int i = 0; i < n;i++) 
        arr[i]+=i;
    int jumps = 0;
    if (n==1) // one element returns 0
        return 0;
    if (arr[0] == 0) // first element 0 with n>1 results -1.
        return -1;
    else
    {
        for (int i = 0; i < n;)
        {
            if (arr[i] + 1 >= n) // if arr[i] can reach n-1, bam! its over!
            {
                return ++jumps;
            }
            else
            {
                auto it = max_element(arr + i + 1, arr + arr[i] + 1); // computing max range reachable element for next jump
                int index = it - arr; // find its index
                //cout << *it << "\n";
                if (*it-index == 0) // if step is 0 i.e, (range - index), dead end!
                    return -1;
                ++jumps;
                i = index; // take step and forward the next index
            }
        }
    }
    return jumps;
}
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends