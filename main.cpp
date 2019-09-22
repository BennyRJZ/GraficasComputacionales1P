/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

//#include "Punto.h"
#include "Linea.h"
void reshape(int width, int height)
{
     glViewport(0, 0, width, height);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(-320,320,-240,240);
     glMatrixMode(GL_MODELVIEW);
 }

void display()
{
     Punto mipunto;
     Linea milinea;
     mipunto.setValues(50,50);
     milinea.setValues(0,0,40,50);
     glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();


     mipunto.draw();
     milinea.draw();

     glFlush();
 }


void init()
{
     glClearColor(0,0,0,0);
 }

int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutCreateWindow("Manejo Clases");
    init();
    //funcion que se llama para dibujar los objetos en pantalla
    glutDisplayFunc(display);
    //funcion que se llama para indicar que hacer cuando la pantalla cambia de tamano
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
