#include <GL/glut.h>

#include <stdlib.h>

class Punto{

	private:

		int coord[2];

	public:

		Punto();

		~Punto();

		void setValues(int,int);

		int getX();

		int getY();

		int* getValues();

		void draw();

};

