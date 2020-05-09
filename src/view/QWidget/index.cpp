#include <QWidget>

class Widget : QWidget {
public:
    Widget() {
        // 设置窗口标题
        setWindowTitle("标题");
        setWindowIcon(QIcon("::image/cool1")); // 设置窗口图标

        QPalette palette = this->palette();
        palette.setBrush(QPalette::Window, QBrush(QPixmap(":image/cool1")
                                                          // 缩放背景图
                                                          .scaled(size(), Qt::IgnoreAspectRatio
                                                                  // 使用平滑的缩放方式
                                                                  , Qt::SmoothTransformation)
                         )
        );
        setPalette(palette);
        // 显示窗体
        show();
    }
};