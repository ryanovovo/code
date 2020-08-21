#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int id;
	cin >> id;
	int check = (id%10);
	id /= 10;
	int tmp = 0;
	if(check == 0){
		check = 10;
	}
	for(int i = 1; i <= 8; i++){
		tmp += (id%10)*i;
		id /= 10;
	}
	map<int, char> mp;
	for(int i = 10; i <= 17; i++){
		mp[i] = char('A'+i-10);
	}
	mp[34] = 'I';
	for(int i = 18; i <= 22	; i++){
		mp[i] = char('J'+i-18);
	}
	for(int i = 23; i <= 29; i++){
		mp[i] = char('P' + i-23);
	}
	mp[35] = 'O';
	mp[32] = 'W';
	mp[30] = 'X';
	mp[31] = 'Y';
	mp[33] = 'Z';
	vector<char> ans;
	for(int i = 10; i <= 35; i++){
		if(10-((i/10+(i%10)*9+tmp)%10) == check){
			ans.push_back(mp[i]);
		}
	}
	sort(ans.begin(), ans.end());
	for(auto it : ans){
		cout << it;
	}
	cout << endl;
}