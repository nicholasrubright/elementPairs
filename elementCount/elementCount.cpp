//Given an array, count the number of elements that make a pair of the same number, so for this array, we
//have a pair of 1's, pair of 3's and a pair of 6's, thus making 3 pairs
#include <iostream>
using namespace std;

int main()
{
	int array[10] = {1,1,2,3,3,8,4,5,6,6};	//given this random array of numbers
	int n = 10;			//length of the array
	int counter = 0;	//counter to keep track of the pairs
	for (int i = 0; i < n- 1; i++)	//first loop that cycles through the array until the last element
	{
		for (int j = i+1; j < n; j++)	//Second loop that moves through out the array from the first loop
		{
			if (array[i] == array[j])	//If statement that compares if the element are the same number
			{
				counter++;	//if they are a pair, increments the counter by 1.
			}
		}
	}
	cout << counter;

	return 0;
}
