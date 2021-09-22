#include <iostream>
#include <string>
#include <QApplication>
#include <QtWidgets/QLabel>

enum solutions { noProblem, tape, oil };

int problemSolver(int argc, char *argv[], enum solutions s){
    solutions input = s;

    QApplication a(argc, argv);
    QImage image;

    if (input == oil) {
        bool loaded = image.load("/home/marcus/GitHub/mekatronikk/mas245/oving4_gui/wd40.jpg");
        std::cout << "Use oil" << std::endl;
    }else if (input == tape) {
        bool loaded = image.load("/home/marcus/GitHub/mekatronikk/mas245/oving4_gui/gaff.jpeg");
        std::cout << "Use duct tape" << std::endl;
    }else if (input == noProblem) {
        bool loaded = image.load("/home/marcus/GitHub/mekatronikk/mas245/oving4_gui/noproblama.jpg");
            std::cout << "No problem" << std::endl;
    }
    QLabel imageLabel;
    imageLabel.setPixmap(QPixmap::fromImage(image));
    imageLabel.show();
    return a.exec();
}

int showImage(int argc, char *argv[], QString path)
{
    QApplication a(argc, argv);
    QImage image;
    bool loaded = image.load(path);
    // Legg inn sjekk her. Ble bildet lastet?
    QLabel imageLabel;
    imageLabel.setPixmap(QPixmap::fromImage(image));
    imageLabel.show();
    return a.exec();
}

int main(int argc, char *argv[])
{
    problemSolver(argc, argv, tape);
}
