#include <stdio.h>
#include <string.h>

int lights_on(char* lightsToOn){
	char id = '0';
	id = lightsToOn[4];
	switch (id)
    {
    	case '1': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 1");
    		break;
    	case '2': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 2");
    		break;
    	case '3': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 3");
    		break;
    	case '4': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 4");
    		break;
    	case '5': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 5");
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
    		break;
    	case '2': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 2");
    		break;
    	case '3': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 3");
    		break;
    	case '4': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 4");
    		break;
    	case '5': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 5");
    		break;
    }
	
}