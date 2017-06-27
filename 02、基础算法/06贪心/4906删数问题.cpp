#include<string>
#include<iostream>
using namespace std;

int main() {
	int n;
	string s;
	cin >> s >> n;
	while(n--){
		int i;
		bool is = true;
		for(i = 0;i<=s.size();i++){
			if(s[i] < s[i+1]){s.erase(i+1,1);is = false;break;}
		}
		if(is)s.erase(0,1);
	}
	cout << s << endl;
	return 0;
}
