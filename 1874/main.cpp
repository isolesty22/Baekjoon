#include <iostream>
#include <stack>
#include <queue>

int main()
{
	using namespace std;
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int commandNum;
	cin >> commandNum;

	int count = 1;

	queue<char> q;
	stack<int> stack;

	while (commandNum--)
	{
		int num;
		cin >> num;
		//stack에 있거나. count에 있어야 함. 
		if (count <= num)
		{
			while (count <= num)
			{
				stack.push(count++);
				q.push('+');
			}
			stack.pop();
			q.push('-');
		}
		else if (!stack.empty() && num == stack.top())
		{
			stack.pop();
			q.push('-');
		}
		else
		{
			cout << "NO" << '\n';
			return 0;
		}
	}

	while (!q.empty())
	{
		cout << q.front() << '\n';
		q.pop();
	}
}