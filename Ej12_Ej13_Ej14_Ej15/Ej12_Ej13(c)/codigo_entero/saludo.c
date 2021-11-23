//datos.c
char *mensaje="Hola a todos y todas";
int num1 = 8;
int num2 = 10;

//suma.c
int suma (int a, int b){
return a + b;
}

//main.c
#include <stdio.h>
int suma (int a, int b);
extern char *mensaje;
extern int num1, num2;
int main(){
	printf("%s\n", mensaje);
	printf("%d\n", suma (num1, num2));
	return 0;
}

