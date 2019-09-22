#include "Punto.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


Punto::Punto()

{

	coord[0] = 0;

	coord[1] = 0;

}



Punto::~Punto()

{



}



void Punto::setValues(int x1, int y1)

{

    coord[0] = x1;

    coord[1] = y1;

    // Se queda como venia en el ejemplo del profesor.

}



int Punto::getX()

{

	return coord[0];

}



int Punto::getY()

{

	return coord[1];

}



int* Punto::getValues()

{

    return coord;

}



void Punto::draw()

{

    glBegin(GL_POINTS);

        glVertex2iv(coord);

    glEnd();

}

