#include <bits/stdc++.h>
#define endl "\n"
using namespace std;



int main() {
	int t; cin >> t;
	vector<int> res; 
	string a; cin >> a;
	for (int i = 0; i < t; i++) {
		res.push_back(a[i]);
	}
	erase(res, 1);

}