//---- OOP-PuntoSpazio.cpp 
#include <iostream> 
#include <math.h> 
#include "PuntoSpazio.h" 
using namespace std;
class PuntoSpazio : public Punto
{
	double z;
public:
	PuntoSpazio() /* primo costruttore crea un punto nell’origine*/
	{
		setPoint(0, 0);
		z = 0;
	}
	PuntoSpazio(double a) /* secondo costruttore crea un punto sull’asse delle ascisse*/ {
		setPoint(a, 0);
		z = 0;
	}
	PuntoSpazio(double a, double b, double c) /* terzo costruttore */
	{
		setPoint(a, b);
		z = c;
	}
	void visualizzaPunto()
	{
		cout << "x = " << getX() << '\t' << "y = " << getY() << "z = " << z << endl;
	}
	double distanza(PuntoSpazio* P)
	{
		double x = getX(), y = getY();
		return(sqrt((x - P->getX()) * (x - P->getX()) + (y - P->getY()) * (y - P->getX()) + (z - P->z) * (z - P->z)));
	}

}; /* fine classe PuntoSpazio*/
int main()
{
	PuntoSpazio P0 = PuntoSpazio(2, 3, 1); // crea un nuovo punto dello spazio 
	cout << "\nPunto P0 \n";
	P0.visualizzaPunto();
	PuntoSpazio P1 = PuntoSpazio(4, 5, 6); // crea un nuovo punto dello spazio 
	cout << "\nPunto P1 \n";
	P1.visualizzaPunto();
	cout << "\nDistanza tra i due punti: " << P1.distanza(&P0) << endl;
	system("pause");
}
