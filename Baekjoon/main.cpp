#include <iostream>
#include <stack>

int main()
{
	using namespace std;

	stack<int> stack;

	int commandNum;
	cin >> commandNum;

	while (commandNum--)
	{
		string command;
		cin >> command;

		int num;

		if (command == "push")
		{
			cin >> num;
			stack.push(num);
		}
		else if (command == "pop")
		{
			if (stack.empty()) cout << -1 << endl;
			else
			{
				cout << stack.top() << endl;
				stack.pop();
			}
		}
		else if (command == "size")
			cout << stack.size() << endl;
		else if (command == "empty")
			cout << stack.empty() << endl;
		else if (command == "top")
		{
			if (stack.empty()) cout << -1 << endl;
			else cout << stack.top() << endl;
		}
		else commandNum++;
	}
}