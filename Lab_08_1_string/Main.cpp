#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int Count(const string s) {
	int count = 0;
	for (size_t i = 0; i < s.length(); ++i) {
		if (s[i] == 'B' || s[i] == 'A' || s[i] == 'S' || s[i] == 'I' || s[i] == 'C') {
			count++;
		}
	}
	return count;
}

string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('B', pos)) != -1)
		if (s[pos + 1] == 'A' && s[pos + 2] == 'S' && s[pos + 3] == 'I' && s[pos + 4] == 'C')
			s.replace(pos, 5, "Delphi");
		else
			pos++;
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " characters included in the word \"BASIC\"" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;

}