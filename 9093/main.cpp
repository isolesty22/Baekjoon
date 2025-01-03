#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	int num;
	cin >> num;
	cin.get();

	stack<char> stack;

	while (num--)
	{
		char ch;
		while (ch = cin.get())
		{
			if (ch == ' ' || ch == '\n')
			{
				while (!stack.empty())
				{
					cout << stack.top();
					stack.pop();
				}
				cout << ch;

				if (ch == '\n')
					break;
			}
			else
			{
				stack.push(ch);
			}
		}
	}
}