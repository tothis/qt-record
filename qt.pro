QT += widgets

# 应用生成目录
DESTDIR += build

# 应用程序
TARGET = lilei

# 应用图标
RC_ICONS = src/static/favicon.ico

# 可省略配置头文件 源码会引入头文件
HEADERS += \
    src/view/image/index.h

SOURCES += \
    main.cpp \
    src/view/image/index.cpp \
    src/view/QWidget/index.cpp \
    src/view/QLabel/index.cpp

RESOURCES += \
    src/static/index.qrc