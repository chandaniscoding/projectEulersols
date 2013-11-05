//**************************************************
//Multiples of 3 and 5
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.
// EulerSol1.cpp : Defines the entry point for the console application.
//**************************************************
//solution built as console app on VS2010

#include "stdafx.h"
#include "iostream"
/*run a loop till 1000 
check if the counter is a multiple of 3 or 5
if its multiple of both then consider it only once
kepp adding to a temp variable
*/
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int factOfThree = 0;
	int factOfFive = 0;
	int sumOfFactorials = 0;
	for(int count=1; count <1000; count++) 
	{
		if(count%3 == 0)
		{
			factOfThree += count;
			sumOfFactorials += count;
			continue;
		}
		else if(count%5 == 0)
		{
			factOfFive += count;
			sumOfFactorials += count;
		}
	}

	cout<<"\n sum of factors of 3 ="<<factOfThree<<endl;
	cout<<"\n sum of factors of 5 = "<<factOfFive<<endl;
	cout<<"\n sum of factors of 3 and 5 = "<<sumOfFactorials<<endl;
	getchar();
	return 0;
}

