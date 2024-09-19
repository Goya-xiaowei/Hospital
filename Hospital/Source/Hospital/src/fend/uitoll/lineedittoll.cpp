#include "lineedittoll.h"

LineEditToll::LineEditToll()
{
    connect(this,&LineEditToll::editingFinished,this,&LineEditToll::finish);
}
