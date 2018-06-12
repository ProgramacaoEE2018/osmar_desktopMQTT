#include "mqtt_janela.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);   //inicialização do app
    MQTT_janela w;        // declaração da classe Janela
    w.show();    // mostrar janela

    return a.exec();
}
