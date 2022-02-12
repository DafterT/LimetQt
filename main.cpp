#include <QTextStream>
#include "plank.h"
#include "positionedplank.h"
#include <QTest>
#include "test_plank.h"

int main(int argc, char* argv[])
{
    QTextStream out(stdout);
    QTest::qExec(new Test_Plank, argc, argv);
    return 0;
}
