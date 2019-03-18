# C_Server
Web server en C que estará corriendo en un sistema operativo a la medida (Yocto)

## Ejecución
* Descargar archivos
* Ejecuctar en comando make desde la consola
* Una vez finalizada la compilación,ejecutar el programa mediante el comando "./server"
* Una vez ejecuta se mostrar el mensaje "Server started http://127.0.0.1:8080"


## Funcionamiento
* El servidor obtiene los estados de las puertas mediante la lectura del archivo "doorStatus", que obtiene los valores de los archvivos  "door1", "door2", "door3" y "door4" (representan los archivos de los pines), los cuales 
contienen un 1 o un 0 para indicar si puerta esta abierta o cerrada respectivamente.(estos archivos deben cambiarse a los archivos 
que tienen los valores de los pines a los que están conectados las puertas).

* Las luces se van a controlar desde la página, cuando se clickea la luz se puede apagar o prender la luz.

* Falta de ver lo de la camara**

* Probar los request desde postman 

* Usa Query Params

* El siguiente request obtiene los estados de las puertas, desde los archivos que representan los archivos de los pines:

```
GET: http://localhost:12913/doors
```

* Resquest que por ejemplo prendería la luz #3.
```
POST: http://localhost:12913/lights/on?luz=3
QUERY PARAMS: {
		| Key  | Value |
		| ---- | ----- |
		| Luz  |   3   |
	}
```

* Resquest que por ejemplo apagaría la luz #3.
```
POST: http://localhost:12913/lights/off?luz=3
QUERY PARAMS: {
		| Key  | Value |
		| ---- | ----- |
		| Luz  |   3   |
	}
```

* Resquest tomar foto.

* Resquest encender luces simultaneamente

* El pinaje actual de las puertas y lamparas actual es:
	puertas:
		- puerta_1 = pin 1
		- puerta_2 = pin 2
		- puerta_3 = pin 3
		- puerta_4 = pin 4
	luces:
		- luz_1 = pin 5
		- luz_2 = pin 6
		- luz_3 = pin 7
		- luz_4 = pin 7
		- luz_5 = pin 8

