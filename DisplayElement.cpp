#include "stdafx.h"
#include "DisplayElement.h"

void display(vector<int> numList)
{
	// for_each(numList.begin(), numList.end(), DisplayElement<int>());
	for_each(numList.begin(), numList.end(), [] (int element) {	cout << element << endl;});
}
