#include<iostream>
#include<string>
using namespace std;

char n[26] = {'e','p','l','r','a','g','f','s','o','x','v','c','w','t','i','b','z','d','h','n','y','k','m','j','u','q'};
char t;
string str;

int main() {
	while (getline(cin,str)) {
		for (int i = 0; i < str.size(); i++) {
			if (str.at(i) >= 65 && str.at(i) <= 90) {
				t = n[str.at(i) - 'A'] - 32;
				cout << t;
			}
			else if (str.at(i) >= 97 && str.at(i) <= 122) cout << n[str.at(i) - 'a'];
			else cout << str.at(i);
		}
		cout << endl;
	}
	return 0;
}