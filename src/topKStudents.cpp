/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
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
/*
void swaping(char* str1, char* str2){
	for (int i = 0; str1[i] != '\0'; i++){
		char ch = str1[i];
		str1[i] = str2[i];
		str2[i] = ch;
	}
}

void * scoresAscendingSort(struct student *students, int len) {
	if (students != NULL && len > 0){
		if (len == 1){
			return students;
		}
		else{
			for (int i = 0; i < len; i++){
				for (int j = i + 1; j < len; j++){
					if (students[i].score > students[j].score){
						int temp = students[i].score;
						students[i].score = students[j].score;
						students[j].score = temp;
						swaping(students[i].name, students[j].name);
					}
				}
			}
			return students;
		}
	}
	else{
		return NULL;
	}
}
*/
struct student ** topKStudents(struct student *students, int len, int K) {
/*	//students = (student*)scoresAscendingSort(students, len);
	int i = len - K + 1;
	//
	*/
	return NULL;
	
}