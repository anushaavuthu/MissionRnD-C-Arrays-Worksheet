/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
#include<stdlib.h>
void sort(int *Arr,int len)
{
	int k,temp,l;
	for (k = 0; k < len; k++)
	{
		for (l = 0; l < len; l++)
		{
			if (Arr[k] < Arr[l])
			{
				temp = Arr[k];
				Arr[k] = Arr[l];
				Arr[l] = temp;
			}
		}
	}
}
int removeArrayDuplicates(int *Arr, int len)
{
	int *temp,i=0,j=0,t;
	if (Arr == NULL || len <= 0)
		return -1;
	else
	{
		temp = (int *)calloc(10, sizeof(int));
		for (i = 0; i < len; i++)
		{
			t = Arr[i];
			if (temp[t] == 0)
				temp[t]++;
		}
		for (i = 0; i <= 9; i++)
		{
			if (temp[i] != 0){
				Arr[j] = i;
				j++;
			}
		}
		return j;
	}
	

	return -1;
}