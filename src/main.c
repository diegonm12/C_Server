#include <httpd.h>
#include <lights.h>
#include <doors.h>
#include <camara.h>

int main(int c, char** v)
{
    serve_forever("8080");
    return 0;
}

void route()
{
    ROUTE_START()

    ROUTE_GET("/login")
    {
        printf("HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\n\r\n");
        while (strcmp("0=Z&1=2&10=p&11=w&12=Y&13=X&14=N&15=v&2=F&3=i&4=c&5=m&6=l&7=l&8=b&9=D",qs) != 0){
         printf("%s\n","false");
         break;
        }
    }

    ROUTE_GET("/")
    {
        printf("HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\n\r\n");
        printf("Hello! You are using %s", request_header("Origin"));
    }

    ROUTE_POST("/")
    {
        printf("HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\n\r\n");
        printf("Wow, seems that you POSTed %d bytes. \r\n", payload_size);
        printf("%s\n", payload);
    }

	ROUTE_POST("/lights/on")
    {
        printf("HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\n\r\n");
        lights_on(qs); 
    }
	
	ROUTE_POST("/lights/off")
    {
        printf("HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\n\r\n");
        lights_off(qs); 
    }

	ROUTE_GET("/doors")
    {
        printf("HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\n\r\n");        
        checkingDoors();
    }
	ROUTE_GET("/camara")
    {
        printf("HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\n\r\n");
        printf("Hello! You are using %s", request_header("User-Agent"));
        takePhoto();
    }
    

  
    ROUTE_END()
}
