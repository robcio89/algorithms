#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

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
	return mid;
}

int binary_search2(std::vector<int>& v, int left, int right, int x)
{
	if (right < left)
		return -1;

	int mid = floor((left + right) / 2);

	if (v[mid] == x)
	{
		return mid;
	}

	if (x < v[mid])
	{
		mid = binary_search2(v, left, mid - 1, x);
	}
	else
	{
		mid = binary_search2(v, mid + 1, right, x);
	}
	return mid;
}

int main()
{
	int *t = new int[5];
	t[0] = 2;
	t[1] = 5;
	t[2] = 7;
	t[3] = 8;
	t[4] = 10;

	std::vector<int> v{ 2, 5, 7, 8, 10 };

	std::cout << "My implementation: " << binary_search(t, 0, 4, 8) << std::endl;
	std::cout << "My implementation2: " << binary_search2(v, 0, 4, 8) << std::endl;
	std::cout << "std implementation: " << std::binary_search(v.begin(), v.end(), 8) << std::endl;;

	return 0;
}