#include <iostream>
#include <stack>

int main()
{
	using namespace std;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int num;
	cin >> num;
	cin.get();

	while (num--)
	{
		//stack<char> stack;
		int stack = 0;
		char ch;
		bool flag = false;

		while ((ch = cin.get()) != '\n')
		{
			if (stack >= 0)
			{
				if (ch == '(')
				{
					stack++;
				}
				else if (ch == ')')
				{
					stack--;
				}
			}
			else
			{
				while (cin.get() != '\n');
				cout << "NO" << endl;
				flag = true;
				break;
			}
		}

		if (!flag)
		{
			if (stack == 0)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}

	}

}