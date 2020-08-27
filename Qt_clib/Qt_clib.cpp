#include "Qt_clib.h"
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qmessagebox.h>

Qt_clib::Qt_clib(QWidget * parent)
	:QWidget(parent)
{
	this->resize(200, 200);
	QVBoxLayout* lay = new QVBoxLayout();
	m_btn = new QPushButton();
	QObject::connect(m_btn, SIGNAL(clicked()), this, SLOT(onBtnClick()));
	lay->addWidget(m_btn);
	this->setLayout(lay);
}
Qt_clib::~Qt_clib() {

}
void Qt_clib::onBtnClick() {
	QMessageBox* haha = new QMessageBox(QMessageBox::Icon::Information,QString("haha"),QString("hello"));
	haha->show();
}
