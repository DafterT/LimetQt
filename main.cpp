#include <QTextStream>
#include "plank.h"
#include "positionedplank.h"

int main()
{
    QTextStream out(stdout);
    PositionedPlank* a = new PositionedPlank(17, 5, 4, 15, 1);
    out << a->include(24) << "\n";
    return 0;
}
