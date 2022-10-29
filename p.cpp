// Trying c++ for reference.
// Python3 timed out (not sure if pypy would)
#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <numeric>

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())
#define mp make_pair
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vl vector<long long>
#define vpl vector<pair<long long, long long>>

using namespace std;
using ll = long long;
int mode, t;


void solve() {
  
}



int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  mode = 1;
  if (mode == 0) { 
    solve();
  } else {
    cin >> t;
    for (int i = 1; i <= t; i++) {
      cout << "Case #" << i << ": ";
      solve();
    }
  }
}
