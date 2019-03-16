#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int checkingDoors(){
    system("> doorStatus");
    system("cat door1 | tr -d '\n' >> doorStatus");
    system("cat door2 | tr -d '\n' >> doorStatus");
    system("cat door3 | tr -d '\n' >> doorStatus");
    system("cat door4 | tr -d '\n' >> doorStatus");
    char c[20];
    FILE *fptr;

    if ((fptr = fopen("doorStatus", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);         
    }
 
    fscanf(fptr,"%[^\n]", c);

    printf("%s\n", c);
    fclose(fptr);



} 




