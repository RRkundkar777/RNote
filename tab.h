#ifndef TAB_H
#define TAB_H

#include <QWidget>

namespace Ui {
class Tab;
}

class Tab : public QWidget
{
    Q_OBJECT

public:
    explicit Tab(QWidget *parent = nullptr);
    ~Tab();

    // Function to get Text inside Plain Text Widget
    static QString getPlainTextData(Tab*);

    // Function to set Text inside Plain Text Widget
    static void setPlainTextData(Tab*, QString);

private:
    Ui::Tab *ui;
};

#endif // TAB_H
