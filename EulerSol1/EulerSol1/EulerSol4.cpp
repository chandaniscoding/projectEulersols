//********************************************
//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.
//
#include "stdafx.h"
#include "iostream"

using namespace std;

bool IsProductPalindrome(int& prod)
{
	int temp1 = prod;
	int finalNumber = 0;
	 while(temp1)
	 {
		int t1 = temp1%10;
		finalNumber = (finalNumber*10) + t1;

		if(t1 == 0)
			finalNumber = finalNumber *10;

		temp1 = temp1/10;

	 }

	 if(finalNumber == prod)
		 return true;

	return false;
}

int main(int argc, _TCHAR* argv[])
{
	int product;
	bool isPalindrome = false;
	
	for(int counter1 = 999 ;counter1 > 0 ; counter1--)
		{
				for(int counter2 = 999 ;counter2 > 0 ;counter2--)
				{
					product = counter1 * counter2;
     				isPalindrome = IsProductPalindrome(product);
					if(isPalindrome)
					{
						cout<<"\n largest palindrome from product of 3 digit numbers is : "<<product<<endl;
						break;
					}
				}
				if(isPalindrome)
					break;
		}
	
	getchar();
	return 0;
}
