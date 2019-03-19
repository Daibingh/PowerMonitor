QT += core widgets serialport

HEADERS += \
    powermonitor.h

SOURCES += \
    main.cpp \
    powermonitor.cpp

FORMS += \
    powermonitor.ui
INCLUDEPATH += D:/Qt/Qt5.5.1/5.5/mingw492_32/include/qwt
DEFINES += QT_DLL QWT_DLL
LIBS += -L"D:\Qt\Qt5.5.1\5.5\mingw492_32\bin" -lqwtd
LIBS += -L"D:\Qt\Qt5.5.1\5.5\mingw492_32\bin" -lqwt

RESOURCES += \
    rec.qrc
