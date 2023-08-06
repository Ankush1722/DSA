// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        map<char, int> m;
        string ans = "";
        queue<char> q;

        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];

            q.push(ch);
            m[ch]++;

            while (!q.empty())
            {
                if (m[q.front()] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    string A = "zz";
    // cin >> A;
    Solution obj;
    string ans = obj.FirstNonRepeating(A);
    cout << "The string is: " << ans << "\n";
}