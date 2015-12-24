///Challenge 239 https://www.reddit.com/r/dailyprogrammer/comments/3r7wxz/20151102_challenge_239_easy_a_game_of_threes/
// Takes an integer from standard input stream and reduces it to 1 by dividing by 3 and adding or subtracting by 1 if needed

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
			a = (a+1) / 3;
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

