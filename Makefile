all: server

clean:
	@rm -rf *.o
	@rm -rf server

server: main.o httpd.o lights.o doors.o
	gcc -o server $^

main.o: main.c ./include/httpd.h 
	gcc -c -o main.o main.c


httpd.o: ./src/httpd.c ./include/httpd.h
	gcc -c -o httpd.o ./src/httpd.c

lights.o: ./src/lights.c ./include/lights.h
	gcc -c -o lights.o ./src/lights.c 

doors.o: ./src/doors.c ./include/doors.h
	gcc -c -o doors.o ./src/doors.c 
