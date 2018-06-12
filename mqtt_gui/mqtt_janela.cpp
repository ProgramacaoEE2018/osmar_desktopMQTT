#include "mqtt_janela.h"
#include "ui_mqtt_janela.h"
#include <qmessagebox.h>
#include "meu_client.h"
#include "servidor.h"
#include "controle.h"
#include "iconv.h"

Cliente client;
Servidor server;
Binario lamp;
bool conectado=false;



MQTT_janela::MQTT_janela(QWidget *parent) :    //construtor
    QMainWindow(parent),
    ui(new Ui::MQTT_janela)
{
    ui->setupUi(this);
}

MQTT_janela::~MQTT_janela()       // destrutor
{
    delete ui;
}

void MQTT_janela::on_botConnect_clicked()     // o que executar quanto botão de conectar for acionado
{
    if(conectado){
        QMessageBox aviso;                //criar objeto QMessageBox 
        aviso.setText("Desconectando");         //mudar texto
        aviso.setStandardButtons(QMessageBox::Ok);     //definir botões
        aviso.setDefaultButton(QMessageBox::Ok);      
        aviso.setWindowTitle("AVISO");       //definir título da janela
        aviso.exec();           // executar
        server.desconectar();    
        conectado=false;
        ui->statusLabel->setText("Desconectado");   //mudar texto de status
        ui->botConnect->setText("Conectar");    //mudar texto do botão

    }
    else{
        server.mudaEndereco(ui->hostIn->text());
        server.mudaPort(ui->portIn->text());
        client.mudaUsername(ui->userIn->text());
        client.mudaPassword(ui->passIn->text());
        QMessageBox aviso;
        aviso.setText("Seus dados enviados: \nUser: "+client.pegaUsername()+"\nPassword: "+client.pegaPassword()+"\nHost: " +server.pegaEndereco()+"\nPort: "+server.pegaPort());
        aviso.setStandardButtons(QMessageBox::Ok);
        aviso.setDefaultButton(QMessageBox::Ok);
        aviso.setWindowTitle("AVISO");
        aviso.exec();
        server.conectar(client);
        conectado=true;
        ui->statusLabel->setText("Conectado");
        ui->botConnect->setText("Desconectar");
    }


}

void MQTT_janela::on_botOn_clicked()    // o que acontecer quando botão de ligar lâmpada for acionado
{
    if (conectado){
       lamp.mudaTopico(ui->topicIn->text());
       lamp.on(ui->QoSIN->text().toInt());
       QMessageBox aviso;
       aviso.setText("Ligando a Lâmpada");
       aviso.setStandardButtons(QMessageBox::Ok);
       aviso.setDefaultButton(QMessageBox::Ok);
       aviso.setWindowTitle("AVISO");
       aviso.exec();}
    else {
        QMessageBox aviso;
        aviso.setText("Conecte-se ao servidor");
        aviso.setStandardButtons(QMessageBox::Ok);
        aviso.setDefaultButton(QMessageBox::Ok);
        aviso.setWindowTitle("AVISO");
        aviso.exec();
    }

}

void MQTT_janela::on_botOff_clicked()
{
    if (conectado){
        lamp.mudaTopico(ui->topicIn->text());
        lamp.off(ui->QoSIN->text().toInt());
        QMessageBox aviso;
        aviso.setText("Desligando a Lâmpada");
        aviso.setStandardButtons(QMessageBox::Ok);
        aviso.setDefaultButton(QMessageBox::Ok);
        aviso.setWindowTitle("AVISO");
        aviso.exec();
    }
    else {
        QMessageBox aviso;
        aviso.setText("Conecte-se ao servidor");
        aviso.setStandardButtons(QMessageBox::Ok);
        aviso.setDefaultButton(QMessageBox::Ok);
        aviso.setWindowTitle("AVISO");
        aviso.exec();
    }
}

void MQTT_janela::on_botTog_clicked()
{
    if (conectado){
        lamp.mudaTopico(ui->topicIn->text());
        lamp.toggle(ui->QoSIN->text().toInt());
        QMessageBox aviso;
        aviso.setText("Mudando estado da Lâmpada");
        aviso.setStandardButtons(QMessageBox::Ok);
        aviso.setDefaultButton(QMessageBox::Ok);
        aviso.setWindowTitle("AVISO");
        aviso.exec();}
    else {
        QMessageBox aviso;
        aviso.setText("Conecte-se ao servidor");
        aviso.setStandardButtons(QMessageBox::Ok);
        aviso.setDefaultButton(QMessageBox::Ok);
        aviso.setWindowTitle("AVISO");
        aviso.exec();
    }
}
