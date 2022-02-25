#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CoinFlip.h"

class CoinFlip : public QMainWindow
{
    Q_OBJECT

public:
    CoinFlip(QWidget *parent = Q_NULLPTR);

private:
    Ui::CoinFlipClass ui;
};
