#include <iostream>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <utility>
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vl vector<long long>
#define vpl vector<pair<long long, long long>>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(x) (int) x.size()
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
template<typename T>
void printVector(const T& t) {
    if (t.size() > 0) cout << t[0];
    else {cout << "\n";return;}
    fore (i, 1, t.size()) {
      cout << " " << t[i];
    }
    cout << "\n";
}
using ll = long long;
const int mode = 1;


void solve() {
}



int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;

  if (mode == 0) { 
    solve();
  } else {
    cin >> t;
    while (t--) {
      solve();
    }
  }
}
