/***************************************************
//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include "stdafx.h"
#include "iostream"

using namespace std;

int main(int argc, _TCHAR* argv[])
{
	int firstVal = 0;
	int secondVal = 1;
	int thirdVal = 0;
	int sum = 0;

	while(thirdVal < 4000000)
	{
		thirdVal = firstVal + secondVal;
		if(thirdVal%2 == 0)
			sum +=  thirdVal;

		firstVal = secondVal;
		secondVal = thirdVal;
			
	}

	cout <<"\n sum of even members of Fibonacci series (less than 4000000) = "<<sum<<endl;
	getchar();

	return 0;
}