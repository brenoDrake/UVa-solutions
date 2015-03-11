#include<map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	map<string, char> myMap;
	long long n, m, count;
	string s;
	
	while(true)
	{
		cin >> n >> m;
		if(n == 0 && m == 0)
			break;
		
		count = 0;
		while(n --)
		{
			cin >> s;
			myMap[s] = 'a';
		}

		while(m --)
		{
			cin >> s;
			if(myMap.count(s))
				count ++;
		}

		myMap.clear();			
		cout << count << endl;
	}

	return 0;
}
