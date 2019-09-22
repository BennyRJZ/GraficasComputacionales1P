#include "Linea.h"

Linea::Linea()
{
}
Linea::Linea(int _x1, int _y1, int _x2, int _y2)
{
  p1.setValues(_x1,_y1);
  p2.setValues(_x2,_y2);
  pivote.setValues(0,0);
}
Linea::Linea(Punto _p1,Punto _p2)
{
  p1.setValues(_p1.getX(),_p1.getY());
  p2.setValues(_p2.getX(),_p2.getY());
  pivote.setValues(0,0);
}
Linea::~Linea()
{
}

void Linea::setValues(int _x1, int _y1, int _x2, int _y2)
{
	p1.setValues(_x1,_y1);
	p2.setValues(_x2,_y2);
}
void Linea::setValues(Punto _p1,Punto _p2)
{
	p1.setValues(_p1.getX(),_p1.getY());
	p2.setValues(_p2.getX(),_p2.getY());
}

Punto Linea::getP1()
{
  return p1;
}

Punto Linea::getP2()
{
  return p2;
}

void Linea::draw()
{
    //algoritmo bresenhamniesco
    int x1 = p1.getX();
    int y1 = p1.getY();
    int x2 = p2.getX();
    int y2 = p2.getY();

    int dx,dy;

    int x,y;

    int D,e,ne;


    if (abs(x2-x1)>abs(y2-y1))
    {
        dx = (x2>x1)?x2-x1:x1-x2;
        dy = (y2>y1)?y2-y1:y1-y2;
        x = x1;
        y = y1;

        D = 2 * dy-dx;
        int e = 2*dy;
        int ne = 2*(dy-dx);

        for(int i = 0; i < dx; i++)
        {
            if(D >= 0) {
                y += (y2<y1)?(-1):(1);
                D += ne;
            }
            else{
                D += e;
            }

            x += (x2<x1)?(-1):(1);

            pivote.setValues(x,y);
            pivote.draw();
        }
    }
    else
    {
        dx = (x2>x1)?x2-x1:x1-x2;
        dy = (y2>y1)?y2-y1:y1-y2;
        x = x1;
        y = y1;

        D = 2 * dy-dx;
        int e = 2*dy;
        int ne = 2*(dy-dx);

        for(int i = 0; i < abs(dy); i++)
        {
        if(D >= 0) 
        {
            x += (x2<x1)?(-1):(1);
            D += ne;
        }
        else
        {
            D += e;
        }
        y += (y2<y1)?(-1):(1);
        pivote.setValues(x,y);
        pivote.draw();
        }
    }
}

