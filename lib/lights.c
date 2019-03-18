#include <stdio.h>
#include <string.h>
#include <constants.h>
#include <configGPIO.h>

int lights_on(char* lightsToOn){
	char id = '0';
	id = lightsToOn[4];
	switch (id)
    {
    	case '1': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 1");
			digitalWrite(luz_1,'1');
    		break;
    	case '2': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 2");
			digitalWrite(luz_2,'1');
			break;
    	case '3': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 3");
			digitalWrite(luz_3,'1');
			break;
    	case '4': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 4");
			digitalWrite(luz_4,'1');
    		break;
    	case '5': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 5");
    		digitalWrite(luz_5,'1');
			break;
    }
	
}

int lights_off(char* lightsToOff){
	char id = '0';
	id = lightsToOff[4];
	switch (id)
    {
    	case '1': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 1");
			digitalWrite(luz_1,'0');
			break;
    	case '2': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 2");
    		digitalWrite(luz_2,'0');
			break;
    	case '3': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 3");
    		digitalWrite(luz_3,'0');
			break;
    	case '4': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 4");
    		digitalWrite(luz_4,'0');
			break;
    	case '5': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 5");
    		digitalWrite(luz_5,'0');
			break;
    }
	
}