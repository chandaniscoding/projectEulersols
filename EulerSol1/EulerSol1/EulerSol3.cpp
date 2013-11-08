/*******************************************************
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?
*/
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main(int argc, _TCHAR* argv[])
{
	long long largestFactor;
	for (long long counter1 = 2 ;counter1 < (600851475143/2);counter1++)
	{
		bool bIsLargestFactor = true;
		
		if((600851475143%counter1) == 0)
			{
				largestFactor=600851475143/counter1;
				
				for (long long counter2 =2 ;counter2 < (largestFactor/2); counter2++)
					{
						if((largestFactor%counter2) == 0)
							bIsLargestFactor = false;
					}
				
				if(bIsLargestFactor)
					{
						cout<<"Largest prime factor of 600851475143 is : "<<largestFactor<<endl;
						break;
					}
		}
	}

	getchar();
	return 0;
}