#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define BUFFER 256

typedef struct {
  int student_id;
  int mark;
} grade;

int main(void) {
    
  char *professor;
  grade *grades;
  int num_students = 0;
  professor = (char*) calloc(BUFFER, sizeof(char));

  printf("Enter professor name: ");
  scanf("%s", professor);

  printf("Enter number of students: ");
  scanf("%d", num_students);

  grades = (grade*) malloc(num_students * sizeof(grade));

  for (int i = 0; i < num_students - 1; i++) {
    printf("Enter Student ID and grade: ");
    scanf("%d %d", &grades[i].student_id, &grades[i].mark);
  }

  free(professor);
  free(grades);

  return 0;
}

void grade_students(grade *grades, int num_students) {

  FILE *fp = fopen("grades.txt", "w");
  int total_grades = 0;
  for (int k = 0; k < num_students - 1; k++) {
    total_grades = (total_grades + grades[k].mark);
    fprintf(fp, "%d %d\n", grades[k].student_id, grades[k].mark);
  }

  double average = (total_grades / num_students);
  double std_temp = 0;

  for (int j = 0; j < num_students - 1; j++) {
    std_temp = (std_temp + pow((grades[j].mark - average), 2));
  }

  double std_deviation = 0;
  std_deviation = sqrt(std_temp / (num_students - 1));
  fprintf(fp, "Average: %lf\nStandard Deviation: %lf", average, std_deviation);
}