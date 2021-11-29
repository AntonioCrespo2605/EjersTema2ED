**20.Bibliotecas. Busca información y explica las ventajas y desventajas de usar bibliotecas estáticas.**
**21.Bibliotecas. Busca información y explica las ventajas y desventajas de usar bibliotecas dinámicas.**

**Ventajas de las Bibliotecas estáticas:** 
	1- El programa compilado con librerías estáticas puede llevarse a otro ordenador sin necesidad de tener las librerías;
	2- Al no tener que buscar las librerías el programa es más rápido;
	3- Los ejecutables de la estática no se ven afectados si se cambia/actualiza la librería en un posible caso de añadir variables a la librería;
	
**Desventajas de las Bibliotecas estáticas:**
	1- Como contrapunto al apartado 3 de las ventajas, si se actualiza una librería para corregir un fallo, el ejecutable compilado con una librería estática seguirá teniendo el error;
	2- El código del programa con librerías estáticas es bastante más grande; 
	
**Ventajas de las Biliotecas dinámicas:**
	1- El código es bastánte más limpio y corto que el de uno compilado con librería estática;
	2- Si se corrige un fallo en una librería, también se corrige a la hora de llamarla desde el ejecutable;

**Desventajas de las Bibliotecas dinámicas**
	1- Son un pelín más lentas;
	2- Es necesario que al portar el ejecutable, en el nuevo sistema estén instaladas las librerías empleadas;
	3- En un supuesto caso de modificar la librería añadiendo alguna variable, por ejemplo, sería necesario cambiar el código del ejecutable, ya que no serviría;


