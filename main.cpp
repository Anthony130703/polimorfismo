#include "rectangle.h"
#include "circle.h"
#include "point.h"

void px (Figure *p)
{
    p->draw();
}
void py (Figure &rObj)
{
    rObj.draw();
}
int main()
{
    Figure *pf[3]={new Rectangle, new Circle, new Point};

    for(int i=0; i<3; i++)
    {
        pf[i]->draw();
    }
    //falta implementar el delete
    for(int i = 0; i < 3; i++)
    {
        delete pf[i]; // con esto voy a liberar cada objeto dinamico creado
        pf[i] = nullptr;
    }

    px(pf[1]);
    py(*pf[1]);



    return 0;
}

