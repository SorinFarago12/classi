
/* Classe Punto
 Classe derivata PuntoSpazio
*/
// ----- Punto.h 
#include <iostream> 
using namespace std;
class Punto
{
	double x;
	double y;
public:
	Punto(); // 1° costruttore 
	Punto(double s, double t); // 2° costruttore 
	double getX();
	double getY();
	void visualizzaPunto();
	void setPoint(double s, double t);
	double distanza(Punto* p);
};
// --- Sezione implementativa della classe Punto 
Punto::Punto()
{
	x = y = 0;
}
Punto::Punto(double s, double t)
{
	setPoint(s, t);
}
double Punto::getX()
{
	return x;
}
double Punto::getY()
{
	return y;
}
void Punto::visualizzaPunto()
{
	cout << "x = " << x << '\t' << "y = " << y << endl;
}
void Punto::setPoint(double s, double t)
{
	x = s;
	y = t;
}
double Punto::distanza(Punto* p)
{
	return sqrt((x - p->x) * (x - p->x) + (y - p->y) * (y - p->y));
}
