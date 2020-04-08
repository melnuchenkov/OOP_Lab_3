#include <iostream>
#include "Time.h"
using namespace std;

#define MAX 3

void Sort(Time* obj);

int main(void) {

    Time chas[MAX];
    chas[0] = Time(5, 7, 4);
    chas[1] = Time(2, 40, 6);
    chas[2] = Time(5, 59, 3);
	Sort(chas);
	for (int i = 0; i < MAX; i++)
	{
		cout << chas[i] << endl;
	}
	cout << "N : ";
	int n = 0;
	cin >> n;
	for (int i = 0; i < MAX; i++)
	{
		chas[i] -= n;
		cout << chas[i] << endl;
	}
}

void Sort(Time* obj)
{
	for (int i = 0; i < MAX - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < MAX; ++j)
		{
			if (obj[j] >= obj[min])
				min = j;
		}
		swap(obj[i], obj[min]);
	}
}