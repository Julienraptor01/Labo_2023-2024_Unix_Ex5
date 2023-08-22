#ifndef WINDOWCLIENT_H
#define WINDOWCLIENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WindowClient; }
QT_END_NAMESPACE

class WindowClient : public QMainWindow
{
    Q_OBJECT

public:
    WindowClient(QWidget *parent = nullptr);
    ~WindowClient();

    void setRecu(const char* Text);
    void setAEnvoyer(const char* Text);
    const char* getAEnvoyer();
    const char* getRecu();

private slots:
    void on_pushButtonEnvoyer_clicked();
    void on_pushButtonQuitter_clicked();

private:
    Ui::WindowClient *ui;

    char aEnvoyer[200];
    char recu[200];
};
#endif // WINDOWCLIENT_H
