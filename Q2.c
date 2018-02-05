#include <stdlib.h>
#include <stdio.h>

int main(void) {

    FILE *myFile;
    myFile = fopen("question2.txt", "r");

    //read file into array
    int numArray[10];
    int i;
    int n = sizeof(numArray) / sizeof(int);

    if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }

    for (i = 0; i < 10; i++){
        fscanf(myFile, "%d", &numArray[i]);
    }
    
    for (i = 0; i < n; i++){
        printf("Array[%d]=%d\n", i, numArray[i]);
    }

    fclose(myFile);

    return 0;
}