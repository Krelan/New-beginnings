
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
        QLabel label("Hello, another World");
            label.setWindowTitle("Qt Widgets App");
            label.resize(300, 100);
            label.show();
            label.setAlignment(Qt::AlignCenter);
            label.setStyleSheet("font-size: 16pt;");
      return app.exec();
}
