#include<map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int i;	
	string str, str_invertida, str_espelho;
	
	map<char, string> m;
	m['A']="A";
	m['E']="3";
	m['H']="H";
	m['I']="I";
	m['J']="L";
	m['L']="J";
	m['M']="M";
	m['O']="O";
	m['S']="2";
	m['T']="T";
	m['U']="U";
	m['V']="V";
	m['W']="W";
	m['X']="X";
	m['Y']="Y";
	m['Z']="5";
	m['1']="1";
	m['2']="S";
	m['3']="E";
	m['5']="Z";
	m['8']="8";

	while(cin >> str)
	{
		str_invertida = str_espelho = "";
		for(i = str.size() - 1; i >= 0; --i)
		{
			str_invertida += str[i];
			str_espelho += m[str[i]];
		}				

		cout << str;

		if(str == str_invertida && str == str_espelho)
			cout << " -- is a mirrored palindrome." << endl << endl;
		else if(str == str_invertida && str != str_espelho)
			cout << " -- is a regular palindrome." << endl << endl;
		else if(str != str_invertida && str == str_espelho)
			cout << " -- is a mirrored string." << endl << endl;
		else
			cout << " -- is not a palindrome." << endl << endl;
	}

	return 0;
}
