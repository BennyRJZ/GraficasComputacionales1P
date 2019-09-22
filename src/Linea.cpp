#include "Linea.h"

Linea::Linea()
{
}

Linea::~Linea()
{
}

void Linea::setValues(int x1, int y1, int x2, int y2)
{
	p1.setValues(x1,y1);
	p2.setValues(x2,y2);
}
void Linea::setValues(Punto,Punto)
{
	p1.setValues(x1,y1);
	p2.setValues(x2,y2);
}

void Linea::draw()
{
    glBegin(GL_LINES);
        glVertex2iv(p1.getValues());
        glVertex2iv(p2.getValues());
    glEnd();
}

