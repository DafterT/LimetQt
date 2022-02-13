#include "test_positionedplank.h"

void Test_PositionedPlank::checkCorrect()
{
    QCOMPARE(true, PositionedPlank(0, 0, 10, 10, 10).checkCorrect());
    QCOMPARE(false, PositionedPlank(0, 0, 0, 10, 10).checkCorrect());
    QCOMPARE(false, PositionedPlank(0, 0, 10, 0, 10).checkCorrect());
    QCOMPARE(false, PositionedPlank(0, 0, 10, 10, 0).checkCorrect());
    QCOMPARE(false, PositionedPlank(0, 0, -10, 10, 10).checkCorrect());
    QCOMPARE(false, PositionedPlank(0, 0, 10, -10, 10).checkCorrect());
    QCOMPARE(false, PositionedPlank(0, 0, 10, 10, -10).checkCorrect());
    QCOMPARE(false, PositionedPlank(-1, 0, 10, 10, 10).checkCorrect());
    QCOMPARE(false, PositionedPlank(0, -1, 10, 10, 10).checkCorrect());
}

void Test_PositionedPlank::include()
{
    QCOMPARE(false, PositionedPlank(0, 0, 10, 10, 10).include(10));
    QCOMPARE(true, PositionedPlank(10, 10, 3, 3, 10).include(10));
}
