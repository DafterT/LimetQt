#include <QTextStream>
#include "plank.h"
#include "positionedplank.h"
#include <QTest>
#include "test_positionedplank.h"

int main(int argc, char* argv[])
{
    QTextStream out(stdout);
    // Тест для класса Plank
    QTest::qExec(new Test_PositionedPlank, argc, argv);
    return 0;
}
