/* Problem: Given two arrays of equal size n and an integer k. The task is to permute both arrays such that sum of their corresponding element is greater than or equal to k i.e A[i] + B[i] >= k.
Input : A[] = {2, 1, 3}, 
        B[] = {7, 8, 9}, 
        k = 10. 
Output : 1
Permutation  A[] = { 1, 2, 3 } and B[] = { 9, 8, 7 } 
satisfied the condition A[i] + B[i] >= K.

Input : A[] = {1, 2, 2, 1}, 
        B[] = { 3, 3, 3, 4 }, 
        k = 5. 
Output : 0
?Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains three lines.The first line of input contains two integers n and k . Then in the next two lines are space separated values of the array A and B.
Output:
For each test case in a new  line print the required answer.

Constraints:
1<=T<=100
1<=n,k<=200

Example:
Input:
2
3 10
2 1 3
7 8 9
4 5
1 2 2 1
3 3 3 4
Output:
1
0*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
 
bool isPossible(int a[], int b[], int n, int k);

int main()
{	
	int T,TIndex;
	int N;
	int arr1[100],arr2[100];
	int K;
	int i,j 0;

	
	printf("Enter Number of Test cases\n");
	scanf("%d", &T);	
	
	
	for(TIndex=0;TIndex<T;TIndex++)
	{
		printf("Enter Number of Elements 'n' and then k\n");
		scanf("%d",&N);
		scanf("%d",&K);
		printf("Enter first array elements separated by space\n");
		for(i=0;i<N;i++)
		{
			scanf("%d",&arr1[i]);
		}
		printf("Enter second array elements separated by space\n");
		for(i=0;i<N;i++)
		{
			scanf("%d",&arr2[i]);
		}
		
		isPossible(arr1, arr2, N, K) ? cout << "Yes\n" :
                             cout << "No\n";
	}
	return *arr2;
}


// C++ program to check whether permutation of two
// arrays satisfy the condition a[i] + b[i] >= k.

// Check wheather any permutation exists which
// satisfy the condition.
bool isPossible(int a[], int b[], int n, int k)
{
    // Sort the array a[] in decreasing order.
    sort(a, a + n);
 
    // Sort the array b[] in increasing order.
    sort(b, b + n, greater<int>());
 
    // Checking condition on each index.
    for (int i = 0; i < n; i++)
        if (a[i] + b[i] < k)
            return false;
 
    return true;
}
 
		