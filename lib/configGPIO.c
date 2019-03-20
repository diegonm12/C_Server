#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX_CMN_LEN 100

//Permite establecer el modo (entrada/salida) de un pin espec´ıfico (n´umero de pin/gpio).
void pinMode(char* pin,char* MODE){
	char command_0[50]="echo ";
	strcat(command_0,pin);	
	strcat(command_0," > /sys/class/gpio/export");

	system(command_0);

	char command[50]="echo ";
	strcat(command,MODE);
	strcat(command," > /sys/class/gpio/gpio");
	strcat(command,pin);
	strcat(command,"/direction");

	system(command);
}
//char arr[]
//Permite escribir un valor de 0 o 1 en el pin espec´ıfico configurado como salida.
void digitalWrite(char* pin,char* value){
	char command[50]="echo ";
	strcat(command,value);
	strcat(command," > /sys/class/gpio/gpio");
	strcat(command,pin);
	strcat(command,"/value");


	system(command);

}

//Permite leer el estado (0,1) de un pin digital.
int digitalRead(char* pin){
	char command[50]="cat /sys/class/gpio/gpio";
	char line[10];

	strcat(command,pin);
	strcat(command,"/value");
	FILE *file = popen (command, "r");

    fgets(line, sizeof(line), file);
    fclose(file);
    int read = atoi(line);
    return read;
}

//Permite generar un blink (establecer y desestablecer un valor binario) 
//en un pin a una frecuencia determinada, por un tiempo de duraci´on determinado.
void blink(char* pin, int freq, int duration){
	char off[50]= "echo 0 > /sys/class/gpio/gpio";
	char on [50]="echo 1 > /sys/class/gpio/gpio";

	
	strcat(off,pin);
	strcat(on,pin);
	strcat(off,"/value");
	strcat(on,"/value");
	

	int start = 0;

	while(start < duration){
		system(on);
		sleep(freq);
		system(off);
		sleep(freq);
		start+=2*freq;
	}


}