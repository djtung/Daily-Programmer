///Challenge 240 https://www.reddit.com/r/dailyprogrammer/comments/3s4nyq/20151109_challenge_240_easy_typoglycemia/
// Takes a line from standard input and and scrambles the letters within the words (excludes starting and ending letters)
// doesn't account for punctuation which is probably not correct

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	cout << "Input String: ";

	string str, str2, str3;
	size_t pos;
	getline(cin, str);

	while (!str.empty())
	{
		//get word until space
		pos = str.find(" ", 0);
		if (pos == -1)
		{
			pos = 100; //arbitrary value for long word
		}
		str2 = str.substr(0, pos);

		//erase word from input string
		str = str.erase(0, pos+1);

		//add scrambled word to finished string
		if (str2.length() >= 4)
		{
			random_shuffle(str2.begin() + 1, str2.end() - 1);
		}
		str3 = str3.append(str2 + " ");
	}

	cout << str3 << endl;
	return 0;
}