///Challenge 249 https://www.reddit.com/r/dailyprogrammer/comments/40h9pd/20160111_challenge_249_easy_playing_the_stock/

#include <iostream>
#include <string>
using namespace std;


int main()
{
	string pricelist, str2;
	int i, j, numwords = 1;

	cout << "Enter prices: ";

	//this is just for counting our prices and initializing the array...
	//probably some easier way to count number of spaces in the string :P
	getline(cin, pricelist);

	for (i = 0; i < pricelist.length(); i++)
	{
		if (isspace(pricelist[i]))
		{
			numwords++;
		}
	}

	//create an array of prices and populate it with the values
	float *prices;
	prices = new float[numwords];
	i = 0;

	while (!pricelist.empty())
	{
		prices[i] = stof(pricelist.substr(0, pricelist.find(" ")));
		if(pricelist.find(" ") == string::npos)
		{
			break;
		}
		pricelist.erase(0, pricelist.find(" ")+1);
		i++;
	}

	//the actual calculation
	//runs in O(n^2)
	float low = 0.0, high = 0.0, maxprofit = 0.0;
	for (i = 0; i < numwords - 2; i++)
	{
		for (j = i + 2; j < numwords; j++)
		{
			if ((prices[j] - prices[i])>=maxprofit)
			{
				low = prices[i];
				high = prices[j];
				maxprofit = prices[j] - prices[i];
			}
		}
	}

	cout << endl;
	cout << low << " " << high << endl;
	return 0;
}