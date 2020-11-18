# app template made with deepin toolkit and qt5
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



# build dependencies

these packages need to build application. 
cmake dtkwidget dtkgui dtkcore Qt5WebEngineWidgets Qt5PrintSupport Qt5Svg Qt5Widgets Qt5WebEngine Qt5WebEngineCore Qt5Quick qt5 
some packages are preinstalled and others need to install. in deepin most dependencies are installed by default.
when building if some packages not installed qqt creator will throw error. then we can check which package need to install.Qt5WebEngine and dtkwidget dtk core are need as runtime libraries.
