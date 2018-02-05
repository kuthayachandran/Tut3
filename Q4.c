#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *professor;
	int *student_ids;
	int *grades;
	
	professor = (char*) calloc(1, 256);
	
	printf("Please enter the Professor's name: ");
	scanf("%s", professor);
	
	printf("Please enter the number of students the Professor has: ");
	int stud;
	scanf("%d", &stud);
	student_ids = (int*) malloc(stud * sizeof(int));
	grades = (int*) malloc(stud * sizeof(int));
	
	free(professor);
	free(student_ids);
	free(grades);
	
}