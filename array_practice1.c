/* Problem Statement:
Linear Search: Given an integer array and an element x, find if element is present in array or not. If element is present, then print index of its first occurrence. Else print -1.

Input:
First line contains an integer, the number of test cases ‘T’. Each test case should be an integer. Size of the array ‘N’ in the second line. In the third line, input the integer elements of the array in a single line separated by space. Element X should be inputted in the fourth line, i.e., after entering the elements of array. Repeat the above steps second line onwards for multiple test cases.

Output:
Print the output in a separate line returning the index of the element X. If the element is not present, then print -1.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 100*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{	
	int T,TIndex;
	int N;
	int arr[100];
	int X;
	int i;
	int found = -1;
	
	printf("Enter Number of Test cases\n");
	scanf("%d", &T);
	
	
	
	
	for(TIndex=0;TIndex<T;TIndex++)
	{
	    printf("Enter number of elements in this array\n");
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			printf("Enter array Elements one by one\n");
			scanf("%d",&arr[i]);
		}
		printf("Enter ele to be found\n");
		scanf("%d",&X);
		for(i=0;i<N;i++)
		{	
			if(X == arr[i])
			{
				found = i;
				printf("Success:Element found at index = %d\n",found);
				break;
			}
			else{
				printf("not found returning %d\n",found);
			}
		}
	}
	return found;	
}