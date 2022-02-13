#ifndef TEST_POSITIONEDPLANK_H
#define TEST_POSITIONEDPLANK_H

#include <QObject>
#include <QTest>
#include "positionedplank.h"

class Test_PositionedPlank : public QObject
{
    Q_OBJECT
  private slots:
    void checkCorrect();
    void include();
};

#endif  // TEST_POSITIONEDPLANK_H
