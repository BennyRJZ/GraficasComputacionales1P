#include "Punto.h"

class Linea{
	private:
		Punto p1, p2, pivote;
	public:
		Linea();
        Linea(Punto,Punto);
        Linea(int,int,int,int);
		~Linea();
		void setValues(int, int, int, int);
		void setValues(Punto, Punto);
        void draw();
};
