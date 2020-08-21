#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	string ans;
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		ans.push_back(str[i]-7);
	}
	cout << ans << endl;
}