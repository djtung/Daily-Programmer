///Challenge 240 https://www.reddit.com/r/dailyprogrammer/comments/3s4nyq/20151109_challenge_240_easy_typoglycemia/
// Takes a string from standard input and and scrambles the letters within the words (excludes starting and ending letters in words and punctuation)

#include <iostream>
using namespace std;


int main()
{
	int a;

	cout << "Input: ";
	cin >> a;

	while (a != 1)
	{
		if (a % 3 == 0)
		{
			cout << a << " 0" << endl;
			a = a / 3;
		}
		else if ((a + 1) % 3 == 0)
		{
			cout << a << " 1" << endl;
			a = (a + 1) / 3;
		}
		else if ((a - 1) % 3 == 0)
		{
			cout << a << " -1" << endl;
			a = (a - 1) / 3;
		}
	}

	cout << "1" << endl;

	return 0;
}

