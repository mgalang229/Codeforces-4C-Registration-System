#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	map<string, int> mp;
	for(int i=0; i<n; ++i) {
		string s;
		cin >> s;
		if(mp[s]==0) {
			mp[s]=1;
			cout << "OK";
		} else {
			cout << s << mp[s];
			mp[s]++;
		}
		cout << "\n";
	}
}
