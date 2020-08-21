#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	while(cin >> str){
		long long int tmp = 0;
		for(int i = 0; i < str.size(); i++){
			tmp += str[i] - '0'; 
		}
		if(tmp%3 == 0){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
}