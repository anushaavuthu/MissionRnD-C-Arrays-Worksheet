/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (len > 0 && Arr != NULL){
		int j = 0,i = 0;
		int* f = (int*)malloc(sizeof(int)*(len + 1));
		while (i < len){
			if (Arr[i] < num){
				f[j] = Arr[i];
				j++;
				i++;
			}
			else{
				f[j] = num;
				j++;
				break;
			}
		}
		while (i < len){
			f[j] = Arr[i];
			i++;
			j++;
		}
		if (j < (len + 1)){
			f[j] = num;
		}
		return f;
	}
	return NULL;
}