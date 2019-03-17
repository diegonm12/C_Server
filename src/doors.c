#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <constants.h>
#include <configGPIO.h>

int checkingDoors(){
    system("> doorStatus");
    //system("cat door1 | tr -d '\n' >> doorStatus");
    char com_puerta_1[50] = digitalRead(puerta_1);
	strcat(com_puerta_1," >> doorStatus");
    system(com_puerta_1);
    //system("cat door2 | tr -d '\n' >> doorStatus");
    char com_puerta_2[50] = digitalRead(puerta_2);
	strcat(com_puerta_2," >> doorStatus");
    system(com_puerta_2);
    //system("cat door3 | tr -d '\n' >> doorStatus");
    char com_puerta_3[50] = digitalRead(puerta_3);
	strcat(com_puerta_3," >> doorStatus");
    system(com_puerta_3);
    //system("cat door4 | tr -d '\n' >> doorStatus");
    char com_puerta_4[50] = digitalRead(puerta_4);
	strcat(com_puerta_4," >> doorStatus");
    system(com_puerta_4);
    
    char c[20];
    FILE *fptr;

    if ((fptr = fopen("doorStatus", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);         
    }
 
    fscanf(fptr,"%[^\n]", c);


    printf("%s\n","SERVER_RESPONSE: Chequendo estados de las puertas");
    printf("%s\n", c);
    fclose(fptr);



} 




