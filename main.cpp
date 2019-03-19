#include "powermonitor.h"
#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    PowerMonitor m;
    m.show();
    return app.exec();
}
