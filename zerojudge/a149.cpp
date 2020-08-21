#include<bits/stdc++.h>
using namespace std;
int main(){
	int cases;
	cin >> cases;
	while(cases--){
		string str;
		cin >> str;
		long long int ans = 1;
		for(auto it : str){
			ans *= (it - '0');
		}
		cout << ans << endl;
	}
}