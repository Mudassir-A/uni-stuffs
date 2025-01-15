#include <bits/stdc++.h>
using namespace std;

int main()
{
	string all_letrs = "abcdefghijklmnopqrstuvwxyz"
					   "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	map<char, char> dict1;
	int key = 4;
	for (int i = 0; i < all_letrs.length(); i++)
	{
		dict1[all_letrs[i]] = all_letrs[(i + key) % all_letrs.length()];
	}

	string plain_txt = "I am studying Data Encryption";
	string cipher_txt;

	for (char &c : plain_txt)
	{
		if (dict1.find(c) != dict1.end())
		{
			cipher_txt += dict1[c];
		}
		else
		{
			cipher_txt += c;
		}
	}

	cout << "Cipher Text is: " << cipher_txt << endl;

	map<char, char> dict2;
	for (int i = 0; i < all_letrs.length(); i++)
	{
		dict2[all_letrs[i]] = all_letrs[(i - key) % all_letrs.length()];
	}

	string decrypt_txt;

	for (char &c : cipher_txt)
	{
		if (dict2.find(c) != dict2.end())
		{
			decrypt_txt += dict2[c];
		}
		else
		{
			decrypt_txt += c;
		}
	}

	cout << "Recovered plain text : " << decrypt_txt
		 << endl;

	return 0;
}