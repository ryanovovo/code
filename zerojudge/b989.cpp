#include <bits/stdc++.h>
using namespace std;
string cmp(const string &a, const string &b){
	if(a.length() > b.length()){
		return a;
	}
	if(a.length() < b.length()){
		return b;
	}
	for(unsigned int i = 0; i < a.length(); i++) {
		if(a[i] > b[i]){
			return a;
		}
		if(a[i] < b[i]){
			return b;
		}
	}
	return a;
}
void solve(const string &a, const string &b, const string &c){
	cout << cmp(cmp(a, b), c) << endl;
}
int main(){
	int cases;
	cin >> cases;
	string a, b, c;
	for(int i = 0; i < cases; i++){
		cin >> a >> b >> c;
		solve(a, b, c);
	}
}
