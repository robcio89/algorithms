#include <iostream>
#include <math.h>
#include <algorithm>

int binary_search(int tab[], int left, int right, int x)
{
	if (right < left)
		return -1;

	int mid = floor( (left + right) / 2);

	if (tab[mid] == x)
	{
		return mid;
	}

	if (x < tab[mid])
	{
		mid = binary_search(tab, left, mid-1, x);
	}
	else
	{
		mid = binary_search(tab, mid+1, right, x);
	}	
}

int main()
{
	int *t = new int[5];
	t[0] = 2;
	t[1] = 5;
	t[2] = 7;
	t[3] = 8;
	t[4] = 10;

	std::cout << "My implementation: " << binary_search(t, 2, 10, 8) << std::endl;
	//std::cout << "std implementation: " << std::binary_search()

	return 0;
}