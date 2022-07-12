#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	scanf("%s", &s);

	int l = s.size();
	int o = 0;
	for(char c : s){
		size_t f = s.find_first_of(c);
		int j = 0;
		while(f!=string::npos){
			j++;
			size_t f = s.find_first_of(c, f+1);
		}

		if (j%2 != 0) o++;
	}

	int h = l - o;
	if(h % 2 == 0) h++;
	else h--;

	cout<<(h%2!=0 ? "First" : "Second")<<endl;

	return 0;
}
