/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
	float x1, y1, x2, y2;
	printf("Introduzca las coordenadas del primer punto\n");
	scanf_s("%f %f", &x1, &y1);
	printf("Introduzca las coordenadas del segundo punto\n");
	scanf_s("%f %f", &x2, &y2);
	float norma = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);//error estaba en el - entre medias de esta linea
	float dist;
	dist = sqrt(norma);
	printf("Distancia entre los puntos=%f\n", dist);
	system("PAUSE");
}*/

/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float Distancia(float x1, float y1, float x2, float y2)
{
	float delta_x = x2 - x1;
	float delta_y = y2 - y1;
	float norma = delta_x*delta_x + delta_y*delta_y;
	float dist = sqrt(norma);
	return dist;
}
void main(void)
{
	float x1, y1, x2, y2;
	printf("Introduzca las coordenadas del primer punto\n");
	scanf_s("%f %f", &x1, &y1);
	printf("Introduzca las coordenadas del segundo punto\n");
	scanf_s("%f %f", &x2, &y2);
	float d = Distancia(x1, y1, x2, y2);
	printf("Distancia entre los puntos= %f\n", d);
	system("PAUSE");
}*/

/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct 
{
	float x;
	float y;
} punto;
float Distancia(punto p1, punto p2)
{
	float delta_x = p1.x - p2.x;
	float delta_y = p1.y - p2.y;
	float norma = delta_x*delta_x + delta_y*delta_y;
	float dist = sqrt(norma);
	return dist;
}
void main(void)
{
	punto punto1, punto2;
	printf("Introduzca las coordenadas del primer punto\n");
	scanf_s("%f %f", &punto1.x, &punto1.y);
	printf("Introduzca las coordenadas del segundo punto\\n");
	scanf_s("%f %f", &punto2.x, &punto2.y);
	float d = Distancia(punto1, punto2);
	printf("Distancia entre los puntos=%f\n", d);
	punto*p;
	p = &punto1;
	system("PAUSE");
}*/
//ARRIBA TENGO FUNCIONES DEL DESARROLLO DEL TEMA 1

/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct
{
	float x;
	float y;
	int r;
} punto;
float Distancia(punto, punto);
void pideDatos(punto *,punto*);
int verifica(int, punto, punto);
void main(void)
{
	punto circunferencia1, circunferencia2,*pcircunferencia1,*pcircunferencia2;
	pcircunferencia1 = &circunferencia1;
	pcircunferencia2 = &circunferencia2;
	pideDatos(pcircunferencia1,pcircunferencia2);
	float d = Distancia(circunferencia1, circunferencia2);
	int verificador = verifica(d, circunferencia1, circunferencia2);
	if (verificador = 1)
	{
		printf("Las circunferencias colisionan\n");
	}
	else
	{
		printf("Las circunferencias no colisionan\n");
	}
	printf("Distancia entre los puntos=%f\n", d);
	system("PAUSE");
}
void pideDatos(punto *pcircunferencia1,punto *pcircunferencia2)
{
	printf("Introduzca las coordenadas del centro de la primera circunferencia\n");
	scanf_s("%f %f", pcircunferencia1->x, pcircunferencia1->y);
	printf("Introduzca el radio de la primera circunferencia \n");
	scanf_s("%d", pcircunferencia1->r);
	printf("Introduzca las coordenadas del centro de la segunda circunferencia\n");
	scanf_s("%f %f", pcircunferencia2->x, pcircunferencia2->y);
	printf("Introduzca el radio de la segunda circunferencia \n");
	scanf_s("%d", pcircunferencia2->r);
}
float Distancia(punto p1, punto p2)
{
	float delta_x = p1.x - p2.x;
	float delta_y = p1.y - p2.y;
	float norma = delta_x*delta_x + delta_y*delta_y;
	float dist = sqrt(norma);
	return dist;
}
int verifica(int d, punto circunferencia1, punto circunferencia2)
{
	int verif;
	if (((circunferencia1.r) + (circunferencia2.r)) >= d)
	{
		verif = 1;
	}
	else
	{
		verif = 0;
	}
	return verif;
}*/


//EJERCICIO 1.10
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct
{
	float x;
	float y;
	int r;
} punto;
float Distancia(punto, punto);
void pideDatos(punto *, punto*);
int verifica(int, punto, punto);
void main(void)
{
	punto circunferencia1, circunferencia2, *pcircunferencia1, *pcircunferencia2;
	pcircunferencia1 = &circunferencia1;
	pcircunferencia2 = &circunferencia2;
	pideDatos(pcircunferencia1, pcircunferencia2);
	float d = Distancia(circunferencia1, circunferencia2);
	int verificador = verifica(d, circunferencia1, circunferencia2);
	if (verificador = 1)
	{
		printf("Las circunferencias colisionan\n");
	}
	else
	{
		printf("Las circunferencias no colisionan\n");
	}
	printf("Distancia entre los puntos=%f\n", d);
	system("PAUSE");
}
void pideDatos(punto *pcircunferencia1, punto *pcircunferencia2)
{
	printf("Introduzca las coordenadas del centro de la primera circunferencia\n");
	scanf_s("%f %f", &(pcircunferencia1->x), &(pcircunferencia1->y));
	printf("Introduzca el radio de la primera circunferencia \n");
	scanf_s("%d", &(pcircunferencia1->r));
	printf("Introduzca las coordenadas del centro de la segunda circunferencia\n");
	scanf_s("%f %f", &(pcircunferencia2->x), &(pcircunferencia2->y));
	printf("Introduzca el radio de la segunda circunferencia \n");
	scanf_s("%d", &(pcircunferencia2->r));
}
float Distancia(punto p1, punto p2)
{
	float delta_x = p1.x - p2.x;
	float delta_y = p1.y - p2.y;
	float norma = delta_x*delta_x + delta_y*delta_y;
	float dist = sqrt(norma);
	return dist;
}
int verifica(int d, punto circunferencia1, punto circunferencia2)
{
	int verif;
	if (((circunferencia1.r) + (circunferencia2.r)) >= d)
	{
		verif = 1;
	}
	else
	{
		verif = 0;
	}
	return verif;
}

*/
//EJERCICIO 1.11
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct
{
	float x;
	float y;
	int r;
} punto; //centro de la circunferencia
typedef struct
{
	float x1,x2;
	float y1,y2;
} segmento;
float Distancia1(segmento, punto); //distancia del primer punto del segmento al centro de la circunferencia
float Distancia2(segmento, punto);//distancia del segundo punto del segmento al centro de la circunferencia
float Distancia3(segmento);
void pideDatos(segmento*, punto*);
int verifica(float, float,punto);
void midevelocidad(void);
void main(void)
{
	midevelocidad();

	punto circunferencia1,circunferenciaprueba, *pcircunferencia1;
	segmento misegmento,segmentoprueba, *pmisegmento;
	float limsuperior, liminferior;
	int verificador = 0, i = 0, medidor = 0;
	pcircunferencia1 = &circunferencia1;
	pmisegmento = &misegmento;
	pideDatos(pmisegmento,pcircunferencia1);
	float d1 = Distancia1(misegmento, circunferencia1);
	float d2 = Distancia2(misegmento, circunferencia1);
	
	if (d1 > d2) //si se cumple d1 será la distancia maxima y ,d2 la minima o la perpendicular desde el centro al segmento.
	{
		limsuperior = d1;
		liminferior = d2;
		printf("distancia maxima %f, distancia minima %f\n", limsuperior, liminferior);
		verificador = verifica(limsuperior, liminferior,circunferencia1);
	}
	if (d1 = d2)
	{
		float d3 = Distancia3(misegmento);
		float dp = sqrt((d1*d1) - (d3*d3));
		if (dp = circunferencia1.r)
		{
			printf("la circunferencia y el segmento colisionan");
			verificador = 1;
		}
	}
	else
	{
		limsuperior = d2;
		liminferior = d1;
		printf("distancia maxima %f distancia minima %f\n", limsuperior, liminferior);
		verificador = verifica(limsuperior, liminferior,circunferencia1);
	}
	
	if (verificador = 1)
	{
		printf("La circunferencia y el segmento colisionan\n");
	}
	else
	{
		printf("La circunferencia y el segmento no colisionan\n");
	}
	printf("%d", verificador);
	system("PAUSE");
}
void pideDatos(segmento *pmisegmento, punto *pcircunferencia1)
{
	printf("Introduzca las coordenadas del primer punto del segmento\n");
	scanf_s("%f %f", &(pmisegmento->x1), &(pmisegmento->y1));
	printf("Introduzca las coordenadas del segundo punto del segmento\n");
	scanf_s("%f %f", &(pmisegmento->x2), &(pmisegmento->y2));
	printf("Introduzca las coordenadas del centro de la circunferencia\n");
	scanf_s("%f %f", &(pcircunferencia1->x), &(pcircunferencia1->y));
	printf("Introduzca el radio de la circunferencia \n");
	scanf_s("%d", &(pcircunferencia1->r));
}
float Distancia1(segmento p1, punto p2)
{
	float delta_x = p1.x1 - p2.x;
	float delta_y = p1.y1 - p2.y;
	float norma = delta_x*delta_x + delta_y*delta_y;
	float dist = sqrt(norma);
	return dist;
}
float Distancia2(segmento p1, punto p2)
{
	float delta_x = p1.x2 - p2.x;
	float delta_y = p1.y2 - p2.y;
	float norma = delta_x*delta_x + delta_y*delta_y;
	float dist = sqrt(norma);
	return dist;
}
float Distancia3(segmento p1)
{
	float delta_x = p1.x1 - p1.x2;
	float delta_y = p1.y1 - p1.y2;
	float norma = delta_x*delta_x + delta_y*delta_y;
	float dist = (sqrt(norma))/2;
	return dist;
}
int verifica(float limsuperior, float liminferior,punto radio)
{
	int verif;
	if ( ((liminferior<(radio.r)|| (liminferior=(radio.r))))&&((limsuperior>(radio.r))|| (limsuperior=(radio.r))))
	{
		verif = 1;
	}
	else
	{
		verif = 0;
	}
	return verif;
}
void midevelocidad(void)
{
	int i = 0, medidor=0;
	for (i = 0;i < 1000000;i++)
	{
		medidor = sqrt((++i)*medidor-medidor);
	}
}*/
//buscar time.h para hacer la medicion de tiempos 


/*
//DIBUJAR FORMAS POLIEDRICAS COMO CONOS ESFERAS...
#include"glut.h"
void OnDraw(void);
void OnTimer(int value);
void OnKeyboardDown(unsigned char key, int x, int y);
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Mihuevofrito");
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);//todo el codigo anterior no muestra nada por pantalla, solo configura ciertos parametros que debemos dejar asi siempre por defecto
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);
	glutKeyboardFunc(OnKeyboardDown);
	glutMainLoop();//todo este codigo solo crea la ventana sin dibujar nada, para dibujar habría que escribir en OnDraw
	return 0;
}
void OnDraw(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 10, 20,
		0.0, 0, 0.0,
		0.0, 1.0, 0.0);
	glColor3ub(255, 255, 255);
	glutSolidTorus(5,5,20,20);
	glColor3ub(255, 255, 0);
	glutSolidSphere(5, 30, 20);//dibujo el huevo frito
	glutSwapBuffers();
}
void OnTimer(int value)
{

}
void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{

}
*/


/*
//DIBUJAR DIVERSAS FIGURAS POLIEDRICAS EN PLANO
#include"glut.h"
float radio_esfera = 2.0f;
void OnDraw(void);
void OnTimer(int value);
void OnKeyboardDown(unsigned char key, int x, int y);
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Mihuevofrito");
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);//todo el codigo anterior no muestra nada por pantalla, solo configura ciertos parametros que debemos dejar asi siempre por defecto
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);
	glutKeyboardFunc(OnKeyboardDown);
	glutMainLoop();//todo este codigo solo crea la ventana sin dibujar nada, para dibujar habría que escribir en OnDraw
	return 0;
}
void OnDraw(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	//glDisable(GL_LIGHTING);
	glLoadIdentity();
	gluLookAt(0.0, 10, 20, //coloco los parametros en el plano XY
		0.0, 0, 0.0,
		0.0, 1.0, 0.0);
	glColor3ub(255, 0, 0);//glut trabaja como una maquina de estados, si defino ese color hasta que no diga lo contrario se queda así
	glBegin(GL_POLYGON); //PARA PROBAR UN CUADRADO
	//glBegin(GL_LINES); //PARA PROBAR RECTAS
	//glBegin(GL_TRIANGLES); //PARA PROBAR TRIANGULOS
	//glVertex3f(-5.0f, -5.0f, 0.0f);
	//glColor3ub(255, 255, 0);
	//glVertex3f(-5.0f, 5.0f, 0.0f);
	//glColor3ub(0, 255, 255);
	//glVertex3f(5.0f, 5.0f, 0.0f);
	//glColor3ub(0, 0, 255);
	//glVertex3f(5.0f, -5.0f, 0.0f);
	//glEnd();
	//glEnable(GL_LIGHTING);
	glutSolidSphere(radio_esfera, 20, 20);//uso la variable radio de esfera definida como global
	glutSwapBuffers();
}//gltranslatef(float x,float y,float z);  traslada el centro desde donde vemos los ejes coordenados, 
//¡¡¡se usa para dibujar cosas en sitios diferentes¡¡¡
void OnTimer(int value)
{

}
void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	//poner aqui el código de teclado
	if (key == '+' && radio_esfera<3)
		radio_esfera += 0.5f;
	if (key == '-' && radio_esfera>1)
		radio_esfera -= 0.5f;
	glutPostRedisplay();
}
*/


/*
//EJERCICIO MOVER ESFERA CAMBIAR COLOR Y TAMAÑO
#include"glut.h"
float radio_esfera = 2.0f;
float x_esfera = 0.0f;
float y_esfera = 0.0f;
unsigned char rojo_esfera = 255;
unsigned char verde_esfera = 255;
unsigned char azul_esfera = 255;
void OnDraw(void);
void OnTimer(int value);
void OnKeyboardDown(unsigned char key, int x, int y);
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Mihuevofrito");
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);//todo el codigo anterior no muestra nada por pantalla, solo configura ciertos parametros que debemos dejar asi siempre por defecto
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);
	glutKeyboardFunc(OnKeyboardDown);
	glutMainLoop();//todo este codigo solo crea la ventana sin dibujar nada, para dibujar habría que escribir en OnDraw
	return 0;
}
void OnDraw(void)
{
	//Borrado de la pantalla
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 10, 20, // posicion del ojo
		0.0, 0, 0.0, // hacia que punto mira (0,0,0)
		0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
						//aqui es donde hay que poner el código de dibujo
	glColor3ub(rojo_esfera, verde_esfera, azul_esfera);
	glTranslatef(x_esfera, 0, 0);
	glTranslatef(0, y_esfera, 0);
	glutSolidSphere(radio_esfera, 20, 20);
	glTranslatef(-x_esfera, 0, 0);//uso la funcion precreada translate para mover en funcion de una variable la x, la y o la z por separado
	glTranslatef(0, y_esfera, 0);
	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}
void OnTimer(int value)
{

}
void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	//poner aqui el código de teclado
	if (key == '+' && radio_esfera<3)
		radio_esfera += 0.5f;
	if (key == '-' && radio_esfera>1)
		radio_esfera -= 0.5f;
	if (key == 'r')
	{
		rojo_esfera = 255;
		verde_esfera = 0;
		azul_esfera = 0;
	}
	if (key == 'g')
	{
		rojo_esfera = 0;
		verde_esfera = 255;
		azul_esfera = 0;
	}
	if (key == 'b')
	{
		rojo_esfera = 0;
		verde_esfera = 0;
		azul_esfera = 255;
	}
	if (key == 'a')//izq, X negativo
		x_esfera -= 0.1f;
	if (key == 'd')//izq, X positivo
		x_esfera -= -0.1f;
	if (key == 'w')//izq, X positivo
		y_esfera -= -0.1f;
	if (key == 's')//izq, X positivo
		y_esfera -= 0.1f;
	glutPostRedisplay();
}*/

/*

//EJERCICIO CAMBIAR EL COLOR DE LA ESFERA SEGUN CRECE EN LA ANIMACION
#include"glut.h"
struct Esfera
{
	float radio;
	float x;
	float y;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
};
Esfera esfera = { 1,0,0,255,255,255 };
Esfera esfera2 = { 1,3,0,0,255,255 };
//declaraciones de funciones
void Dibuja(Esfera e);
void OnDraw(void);
void OnTimer(int value);
void OnKeyboardDown(unsigned char key, int x, int y);
void Mueve(Esfera* e);
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Mihuevofrito");
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);//todo el codigo anterior no muestra nada por pantalla, solo configura ciertos parametros que debemos dejar asi siempre por defecto
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);
	glutKeyboardFunc(OnKeyboardDown);
	glutMainLoop();//todo este codigo solo crea la ventana sin dibujar nada, para dibujar habría que escribir en OnDraw
	return 0;
}
void OnDraw(void)
{
	//Borrado de la pantalla
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 10, 20, // posicion del ojo
		0.0, 0, 0.0, // hacia que punto mira (0,0,0)
		0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
						//aqui es donde hay que poner el código de dibujo
	Dibuja(esfera);
	Dibuja(esfera2);
	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}
void OnTimer(int value)
{
	//poner aqui el código de animacion
	Mueve(&esfera);
	Mueve(&esfera2);
	glutTimerFunc(100, OnTimer, 0);
	glutPostRedisplay();
}
void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	//poner aqui el código de teclado
	if (key == '+' && esfera.radio<3)
		esfera.radio += 0.5f;
	if (key == '-' && esfera.radio>1)
		esfera.radio -= 0.5f;
	if (key == 'r')
	{
		esfera.rojo = 255;
		esfera.verde = 0;
		esfera.azul = 0;
	}
	if (key == 'a')
		esfera.x -= 0.1f;
	if (key == 'd')
		esfera.x += 0.1f;
	if (key == 's')
		esfera.y -= 0.1f;
	if (key == 'w')
		esfera.y += 0.1f;
}
void Dibuja(Esfera e)
{
	glColor3ub(e.rojo, e.verde, e.azul);
	glTranslatef(e.x, e.y, 0);
	glutSolidSphere(e.radio, 20, 20);
	glTranslatef(-e.x, -e.y, 0);
}
//desacoplar parte logica y parte grafica para mejorar portabilidad **UTIL PARA HACER APLICACIONES ENTRE VARIOS**
void Mueve(Esfera* e)
{
	e->radio += 0.1f;
	if (e->radio > 1)
	{
		e->rojo = 255;
		e->verde = 255;
		e->azul = 0;
	}
	if (e->radio > 2)
	{
		e->rojo = 255;
		e->verde = 0;
		e->azul = 255;
	}
	if (e->radio > 3)
		e->radio = 0.5f;
	
}
*/

//EJERCICIO 2.8 - DBUJAR LA ESCENA Y RECREAR LA ANIMACION
/*
#include"glut.h"
#include"math.h"
struct Esfera
{
	float radio;
	float x;
	float y;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
};

struct Mundo
{
	float x_ojo;
	float y_ojo;
	float z_ojo;
	float x_miro;
	float y_miro;
	float z_miro;
	float x_eje;
	float y_eje;
	float z_eje;
};

Mundo mundo = { -10.0, 10, 20,0.0, 0, 0.0,0.0, 1.0, 0.0 };
Esfera esfera = { 1,0,0,0,255,255 };
Esfera esfera2 = { 1,3,0,255,0,0 };
//declaraciones de funciones
void Dibuja(Esfera e);
void OnDraw(void);
void OnTimer(int value);
void OnKeyboardDown(unsigned char key, int x, int y);
void Mueve(Esfera* e);
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Mi Juego");
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);//todo el codigo anterior configura ciertos parametros que debemos dejar asi por defecto
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);
	glutKeyboardFunc(OnKeyboardDown);
	glutMainLoop();//todo este codigo solo crea la ventana sin dibujar nada, para dibujar habría que escribir en OnDraw
	return 0;
}

void OnDraw(void)
{
	//Borrado de la pantalla
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	/*gluLookAt(
		-10.0, 10, 20, // posicion del ojo
		0.0, 0, 0.0, // hacia que punto mira (0,0,0)
		0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)*/
/*
	gluLookAt(
		mundo.x_ojo, mundo.y_ojo, mundo.z_ojo,
		mundo.x_miro, mundo.y_miro, mundo.z_miro,
		mundo.x_eje, mundo.y_eje, mundo.z_eje);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);//plano general (no tiene que hacer nada mas)
	glColor3ub(255, 255, 0);
    glVertex3f(-5.0f, 0.0f, -5.0f);
	glColor3ub(255, 255, 0);
    glVertex3f(-5.0f, 0.0f, 5.0f);
	glColor3ub(255, 0, 0);
	glVertex3f(5.0f, 0.0f, 5.0f);
	glVertex3f(5.0f, 0.0f, -5.0f);
	glEnd();
	glEnable(GL_LIGHTING);
	glColor3ub(0, 255, 0);
	glutSolidTorus(1,4, 20, 20);//toroide verde que engloba todo (no tiene que hacer nada mas)
	glTranslatef(-5,0 ,-5);
	//glColor3ub(0, 255, 255);
	glTranslatef(3, 0, 5);
	//glutSolidSphere(esfera.radio, 20, 20); esfera azul grande que tiene que variar su radio sola
	Dibuja(esfera);
	//glColor3ub(255, 0, 0); 
	glTranslatef(5, 1, -3);
	//glutSolidSphere(esfera2.radio, 20, 20); las 4 ultimas lineas de codigo comentadas ya se ejecutan al llamar a mis funciones
	Dibuja(esfera2);//esfera roja pequeña que tiene que variar radio y color mediante teclado 
	glutSwapBuffers();
}

void OnTimer(int value)
{
	float theta;
	int d = 10;
	Mueve(&esfera);
	glutTimerFunc(200, OnTimer, 0);
	glutPostRedisplay();
	theta = atan2((mundo.z_ojo), (mundo.x_ojo));
	theta += 0.1;
	mundo.x_ojo = d*cos(theta);
	mundo.z_ojo = d*sin(theta);
}

void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	//poner aqui el código de teclado
	if (key == '+' && esfera2.radio<3)
		esfera2.radio += 0.5f;
	if (key == '-' && esfera2.radio>1)
		esfera2.radio -= 0.5f;
	if (key == 'r')
	{
		esfera2.rojo = 255;
		esfera2.verde = 0;
		esfera2.azul = 0;
	}
	if (key == 'b')
	{
		esfera2.rojo = 0;
		esfera2.verde = 0;
		esfera2.azul = 255;
	}
	if (key == 'g')
	{
		esfera2.rojo = 0;
		esfera2.verde = 255;
		esfera2.azul = 0;
	}
	if (key == 'a')
		esfera2.x += 0.1f;
	if (key == 'd')
		esfera2.x -= 0.1f;
	if (key == 's')
		esfera2.y -= 0.1f;
	if (key == 'w')
		esfera2.y += 0.1f;
}

void Dibuja(Esfera e)
{
	glColor3ub(e.rojo, e.verde, e.azul);
	glTranslatef(e.x, 0, e.y);
	glutSolidSphere(e.radio, 20, 20);
	glTranslatef(-e.x, -e.y, 0);
}

void Mueve(Esfera* e)
{
	e->radio += 0.1f;
	if (e->radio > 3)
		e->radio = 1.0f;
}*/


