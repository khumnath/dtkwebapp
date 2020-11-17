#include "mainwindow.h"
#include <DMainWindow>
#include <DTitlebar>
#include <QtWidgets/QVBoxLayout>


DWIDGET_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    w = new Widget;

    resize(w->size());

    setCentralWidget(w);
    centralWidget()->layout()->setContentsMargins(0, 0, 0, 0);

    titlebar()->setIcon(QIcon(":/images/logo.png"));

    //app title here if needed

    titlebar()->setTitle("qt5 dtk application example");
  titlebarShadowIsEnabled();

}

MainWindow::~MainWindow()
{

}
