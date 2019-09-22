#include "Punto.h"

class Linea{
	private:
		Punto p1, p2, pivote;
	public:
		Linea();
        Linea(int,int,int,int);
        Linea(Punto,Punto);
		~Linea();
		void setValues(int, int, int, int);
		void setValues(Punto, Punto);
        Punto getP1();
        Punto getP2(); 
        void draw();
        

};

/*
pivote.setValues(x,y);
pivote.draw();
**/

/*
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

**/