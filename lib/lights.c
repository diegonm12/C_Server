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
			pinMode(luz_1,'OUTPUT');
			digitalWrite(luz_1,'1');
    		break;
    	case '2': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 2");
			pinMode(luz_2,'OUTPUT');
			digitalWrite(luz_2,'1');
			break;
    	case '3': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 3");
			pinMode(luz_3,'OUTPUT');
			digitalWrite(luz_3,'1');
			break;
    	case '4': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 4");
			pinMode(luz_4,'OUTPUT');
			digitalWrite(luz_4,'1');
    		break;
    	case '5': 
    		printf("%s\n","SERVER_RESPONSE: Se enciende luz 5");
    		pinMode(luz_5,'OUTPUT');
			digitalWrite(luz_5,'1');
			break;
		case '6': 
    		printf("%s\n","SERVER_RESPONSE: Se encienden todas las luces");
    		pinMode(luz_1,'OUTPUT');
			digitalWrite(luz_1,'1');
			pinMode(luz_2,'OUTPUT');
			digitalWrite(luz_2,'1');
			pinMode(luz_3,'OUTPUT');
			digitalWrite(luz_3,'1');
			pinMode(luz_4,'OUTPUT');
			digitalWrite(luz_4,'1');
			pinMode(luz_5,'OUTPUT');
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
			pinMode(luz_1,'OUTPUT');
			digitalWrite(luz_1,'0');
			break;
    	case '2': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 2");
    		pinMode(luz_2,'OUTPUT');
			digitalWrite(luz_2,'0');
			break;
    	case '3': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 3");
    		pinMode(luz_3,'OUTPUT');
			digitalWrite(luz_3,'0');
			break;
    	case '4': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 4");
    		pinMode(luz_4,'OUTPUT');
			digitalWrite(luz_4,'0');
			break;
    	case '5': 
    		printf("%s\n","SERVER_RESPONSE: Se apaga luz 5");
    		pinMode(luz_5,'OUTPUT');
			digitalWrite(luz_5,'0');
			break;
		case '6': 
    		printf("%s\n","SERVER_RESPONSE: Se apagan todas las luces");
    		pinMode(luz_1,'OUTPUT');
			digitalWrite(luz_1,'0');
			pinMode(luz_2,'OUTPUT');
			digitalWrite(luz_2,'0');
			pinMode(luz_3,'OUTPUT');
			digitalWrite(luz_3,'0');
			pinMode(luz_4,'OUTPUT');
			digitalWrite(luz_4,'0');
			pinMode(luz_5,'OUTPUT');
			digitalWrite(luz_5,'0');
			break;
    }
	
}