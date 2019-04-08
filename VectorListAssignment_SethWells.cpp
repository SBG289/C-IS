// Seth Wells
// C++ Vector List Assignment
// 4/7/19

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int area(int l, int w);

int main()
{
	vector<int> li;
	int l = 0, w = 0, a = 0;

	while (l != 1)
	{
		cout << "enter a num for len: \n";
		cin >> l;

		if (l == 1)
		{
			cout << "\r"; //break was skipping "press any key to continue" as well as FIFO
			
		}
		else
		{
			cout << "enter a number for width:\n";
			cin >> w;

			a = area(l, w);

			li.push_back(a);

			cout << "The area is: " << a << endl;
			cout << endl;
		}
	}

	unsigned int i;
	unsigned int p;
	string s = "";
	string b = "";

	//Output first in first out
	for (i = 0; i < li.size(); i++)
	{
		s += to_string(li[i]) + "\r\n";
	}

	cout << endl;
	cout << "list output First In First Out: " << endl;
	cout << s << endl;
	cout << "---------------------------------\n";


	//Output last in first out
	for (int p = li.size() - 1; p >= 0; p--)
	{
		b += to_string(li[p]) + "\r\n";
	}

	cout << endl;
	cout << "list output Last In First Out: " << endl;
	cout << b << endl;
	system("pause");
}

// Calculate Area fxn
int area(int l, int w)
{
	int a = l * w;

	return a;
}