#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
    int id;
    int age;
    int year;
};

void save_student(struct Student student);

int main(void) {
    FILE *myFile;
    struct Student s1;
    printf("Please enter your ID");
    scanf("%d", &s1.id);
    printf("Please enter your age");
    scanf("%d", &s1.age);
    printf("Please enter the year you started UOIT");
    scanf("%d", &s1.year);
    save_student(s1);

    return 0;
}

void save_student(struct Student student) {
    FILE *myFile;
    myFile = fopen("students.txt", "a");
     if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }
    fprintf(myFile, "(%d, " "%d, " "%d)" , student.id, student.age, student.year);
    fclose(myFile);
}