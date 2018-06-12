#ifndef MQTT_JANELA_H
#define MQTT_JANELA_H

#include <QMainWindow>

namespace Ui {
class MQTT_janela;
}

class MQTT_janela : public QMainWindow
{
    Q_OBJECT

public:
    explicit MQTT_janela(QWidget *parent = 0);
    ~MQTT_janela();

private slots:
    void on_botConnect_clicked();

    void on_botOn_clicked();

    void on_botOff_clicked();

    void on_botTog_clicked();

private:
    Ui::MQTT_janela *ui;
};

#endif // MQTT_JANELA_H
