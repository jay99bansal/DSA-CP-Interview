#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define vi vector<int>
#define vli vector<long>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define FOR(i,a,b)  for(int i=(a); i<(b); i++)
#define FORd(i,a,b)  for(int i=(a-1); i>=(b); i--)
#define um unordered_map
#define pq priority_queue

/*
 * Code for finding maximum sum
 * subarray in a vector of size n using Kadane's Algorithm
 *  T = O(n)
 *  S = O(1)
 */


// Function returns the maximum sum of any subarray possible in "v"
int Kadane(vector<int> v) {
    int ms = INT_MIN, cs = 0;
    for(auto n: v) {
        cs = max(cs+n, n);
        ms = max(ms, cs);
    }
    return ms;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v {1,-1,3,-2,4,-4,2};
    cout << Kadane(v) << endl;
    return 0;
}

