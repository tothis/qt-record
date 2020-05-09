#include <QLabel>
#include <QMovie>

class Label : QLabel {
public:
    Label() {
        QMovie *movie = new QMovie(":image/cool2");
        this->setMovie(movie);
        movie->start();
        this->show();
    }
};
