#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, sx, sy, ex, ey;
	cin>>t>>sx>>sy>>ex>>ey;

	string s;
	cin>>s;

	int ft = -1;
	for(int i=1;i<=s.size();i++) {
		switch(s[i-1]){
			case 'S':
				if(ey<sy)
					sy += -1;
				break;
			case 'N':
				if(ey>sy)
					sy += 1;
				break;
			case 'E':
				if (ex>sx)
					sx += 1;
				break;
			case 'W':
				if(ex<sx)
					sx += -1;
				break;
			default:
				break;
		}

		if(sx == ex && sy == ey){
			ft = i;
			break;
		}
	}

	cout<<ft<<endl;
	return 0;
}
