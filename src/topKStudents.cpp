/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the 
names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and
K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

void * scoresdescendingSort_(struct student *students, int len) {
	struct student temp[1];
	if (students != NULL && len > 0)
	{
		for (int i = 0; i < len; i++){
			for (int j = i + 1; j < len; j++){
				if (students[i].score > students[j].score){
					temp[0] = students[i];
					students[i] = students[j];
					students[j] = temp[0];
				}
			}
		}
		return students;
	}
	return NULL;
}


struct student ** topKStudents(struct student *students, int len, int K) {
	if ((K > 0) && (students != NULL)){
		students = (student*)scoresdescendingSort_(students, len);

		struct student **stud = (struct student**)malloc(sizeof(struct student*)*K);
		if (K > len)
			K = len;
		//struct student students[3] = { { "stud1", 60 }, { "stud2", 70 }, { "stud3", 50 } }; 
		//int exp[] = { 50, 60, 70 };

		//struct student students[3] = { { "stud1", 50 }, { "stud2", 60 }, { "stud3", 70 } };
		// struct student **result = topKStudents(students, 3, 2); 70 60 50 3-2
		//int exp[] = { 60, 70 };


		for (int l = 0; l < K; l++)
		{
			stud[l] = &students[len-l-1];
		}
		
		return stud;
	}
	return NULL;
	
}