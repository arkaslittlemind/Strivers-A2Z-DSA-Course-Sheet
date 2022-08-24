Question Link- https://practice.geeksforgeeks.org/problems/count-digits5716/1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int x = N, count = 0;
        while (x != 0)
        {
            // extract the last digit
            int d = x % 10;
            x /= 10;
             
            // check if d divide N completly
            if (d > 0 && N%d == 0)
              count++;
        }
        
        return count;
       
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
