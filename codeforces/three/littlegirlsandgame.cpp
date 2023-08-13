#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
	int alph[26] = {0};
	short int si = s.size()%2;
	for(char c : s){
		int a = c - 'a';
		alph[a]++;
	}

	int odd = 0;
	for(int i=0;i<26;i++){
		int b = alph[i]%2;
		if(b==1&&si==1) si--;
		else if(b==1&&si==0){
			return false
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_false(0);
	cin.tie(0);

	string s;
	cin>>s;

	short int ind = 0;
	while()

	return 0;
}
