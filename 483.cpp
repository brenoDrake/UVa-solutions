#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int i;	
	string str, out;

	while(getline(cin, str))
	{
		out = "";

		for(i = 0; i < str.size(); ++i)
		{
			if(str[i] == ' ')
			{
				reverse(out.begin(), out.end());
				cout << out << " ";
				out = "";
			}
			else
				out += str[i];
		}				

		reverse(out.begin(), out.end());
		cout << out << endl;
	}

	return 0;
}
