#pragma once

#include "qt_clib_global.h"
#include <QtWidgets/qwidget.h>
#include <QtWidgets/qpushbutton.h>

class QT_CLIB_EXPORT Qt_clib : public QWidget
{
    Q_OBJECT
public:
    explicit Qt_clib(QWidget* parent = 0);
    ~Qt_clib();
    private slots:
        void onBtnClick();

private :
    QPushButton* m_btn;
};
