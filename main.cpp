#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>
#include <DAboutDialog>
#include <DMainWindow>


DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
        DApplication a(argc, argv);
    DAboutDialog dialog;
    a.loadTranslator();
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    //application name and product name here
    a.setApplicationName("appname");
    a.setProductName("productname");
    a.setAboutDialog(&dialog);

    //about page title  and app name with inline style.these are for sample. without style(default) text is black.//

    dialog.setWindowTitle("<span style=' font-size:12pt; font-weight:800;'>edit title here</span>");

    dialog.setProductName("<span style=' font-weight:bold;'>change</span>"
                          "<span style='font-weight:bold;'>appname</span>"
                           "<span style='font-weight:bold;'>here</span>");
    //application version

   dialog.setVersion(DApplication::buildVersion("Version 0.1"));
    //application logo

    dialog.setProductIcon(QIcon(":/images/logo.png"));

    //Organization logo if aplicable.

    dialog.setCompanyLogo(QPixmap(":/images/github.svg"));



   //about
   dialog.setDescription(
           "<span style=' font-size:8pt; font-weight:600;'>write here application description </span><br>"
           "<span style=' font-size:8pt; font-weight:600;'>more description here</span>");

   dialog.setWebsiteName("application source code on github");
   dialog.setWebsiteLink("https://sample.com");


   MainWindow w;
   w.show();

   Dtk::Widget::moveToCenter(&w);
   return a.exec();
}
