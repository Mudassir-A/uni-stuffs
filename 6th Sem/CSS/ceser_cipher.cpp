// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Caesar_Cipher
{
public:
	string encrypt(string text, int s)
	{
		int n = text.size();
		string ans = "";
		for (int i = 0; i < n; i++)
		{
			// capitals
			if (isupper(text[i]))
			{
				ans += char(int(text[i] + s - 65) % 26 + 65);
			}
			// small
			else
			{
				ans += char(int(text[i] + s - 97) % 26 + 97);
			}
		}
		return ans;
	}

	string decrypt(string text, int s)
	{
		int n = text.size();
		string ans = "";
		for (int i = 0; i < n; i++)
		{
			// capitals
			if (isupper(text[i]))
			{
				ans += char(int(text[i] - s - 65) % 26 + 65);
			}
			// small
			else
			{
				ans += char(int(text[i] - s - 97) % 26 + 97);
			}
		}
		return ans;
	}
};

int main()
{
	// Write C++ code here
	Caesar_Cipher cc;
	string text;
	int shift;

	cout << "plain text: ";
	cin >> text;
	cout << "shift: ";
	cin >> shift;

	string res = cc.encrypt(text, shift);
	cout << "Text: " << text << endl;
	cout << "Shift: " << shift << endl;
	cout << "Cipher: " << res << endl;
	cout << "Decrypted: " << cc.decrypt(res, shift);
	return 0;
}