
 //   Header da classe controle, foi optado declaração in line por problemas de compilação


#ifndef CONTROLE_H
#define CONTROLE_H

#endif // CONTROLE_H


class Controle {          // definição da classe
private:
    QString nome;
    QString topico;
public:
// setters
    void mudaNome(QString newnome){
        this->nome=newnome;
    }
    void mudaTopico(QString newtopico){
        this->topico=newtopico;
    }

//  getters
    QString pegaNome (){
        return this->nome;
    }
    QString pegaTopico(){
        return this->topico;
    }
// métodos específicos para envio e recebimento de mensagens por MQTT de acordo com a biblioteca a se inserir
    void publicar(QString msg,int qos){
        //código de publicação
    }

    void subescrever(int qos){
        //código de subscrever
    }
};

class Binario : public Controle {   // classe de controle binário, para aparelhos com dois estados (Lâmpadas)

private:
    bool estado;
    QString nome;
    QString topico;
public:
// métodos de envio de mensagens de controle binário
    void on(int qos){
        this->publicar("on",qos);
    }
    void off(int qos){
        this->publicar("off",qos);
    }
    void toggle(int qos){
        this->publicar("tog",qos);
    }
};
