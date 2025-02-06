#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	list<char> str;

	char ch;
	while ((ch = cin.get()) != '\n')
	{
		str.push_back(ch);
	}

	//Ŀ���� ����Ű�� ��� ���ʿ� �ִٰ� ����.
	auto iter = str.end();
	
	//editor
	int commandNum = 0;
	cin >> commandNum;

	while (commandNum--)
	{
		cin >> ch;

		if (ch == 'L')
		{
			if (iter != str.begin())
			{
				advance(iter, -1);
			}
		}
		else if (ch == 'D')
		{
			if (iter != str.end())
			{
				advance(iter, 1);
			}
		}
		else if (ch == 'B')
		{
			if (iter != str.begin())
			{
				advance(iter, -1);
				iter = str.erase(iter);
			}
		}
		else if (ch == 'P')
		{
			char ch2;
			cin >> ch2;

			str.insert(iter, ch2);
		}
			////���� ���� �����ؾߵǳ�?
			//cin.get();
	}

	for (char ch : str) {
		cout << ch ;
	}
	std::cout << '\n';

}