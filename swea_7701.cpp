#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

vector<string>name;


//sort�� �ʿ��ߴ� 1.���̰� ª�� ���� 2.������
bool cmp(string t, string v) {
	if (t.length() < v.length()) return 1;
	if (t.length() > v.length())return 0;
	if (t < v) return 1;
	if (t > v) return 0;
	return 0;
}

int main() {
	int tc;
	cin >> tc;
	for (int t = 1; t <= tc; t++) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			string str;
			
			cin >> str;
			name.push_back(str);
		}
		sort(name.begin(), name.end(),cmp);
		int d = 0;
		cout << "#" << t << "\n";
		for (int i = 0; i < n; i++) {
			//���� �ܾ��� ��쿡�� ������� �ʴ´�.
			if (i>=1 && name[i - 1] == name[i])continue;
			cout << name[i]<<"\n";
		}	name.clear();
	}	
	return 0;
}