#include <QApplication>
#include <QWidget>
#include <QSplashScreen>
#include "src/view/image/index.h"
#include "src/view/QWidget/index.cpp"
#include "src/view/QLabel/index.cpp"

int main(int argc, char *argv[]) {
    /*
     * argc为命令行参数数量
     * argv[0]为程序名称
     * argv[1]~argv[argc-1]为命令行输入参数
     * argc和argv和省略不写 控制台编程使用较多
     */
    QApplication app(argc, argv);

    // new Widget;
    // new Label;
    CarouselImage ci;
    ci.addImage(":image/cool1");
    ci.addImage(":image/cool2");
    ci.addImage(":image/cool1");
    ci.addImage(":image/cool2");
    ci.startPlay();
    ci.setWindowTitle("标题");
    ci.show();

    // exec()函数有一个消息循环 调用后 程序被锁定 等待窗口关闭
    return app.exec();
}
