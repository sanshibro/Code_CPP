#include <iostream>
using namespace std;
#include "7.7-arry-function.h"




void swap1(short c,short  d)
{


short temp = c;
c = d;
d= temp;



}




void swap2(short *c,short * d)
{


short temp = *c;
*c = *d;
*d = temp;

}
