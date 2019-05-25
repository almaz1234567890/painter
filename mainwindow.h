#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    virtual void mousePressEvent(QMouseEvent* e) override;
    // virtual void mouseMoveEvent(QMouseEvent* e) override;
    // virtual void mouseReleaseEvent(QMouseEvent* e) override;
    ~MainWindow() override;

private:
    bool is_clicked;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
