#ifndef TEST_PLANK_H
#define TEST_PLANK_H

#include <QObject>
#include <QTest>

class Test_Plank : public QObject
{
    Q_OBJECT
  private slots:
    void checkCorrect();
};

#endif  // TEST_PLANK_H
