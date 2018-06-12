 //   Header da classe servidor, foi optado declaração in line por problemas de compilação

#ifndef SERVIDOR_H
#define SERVIDOR_H

#endif // SERVIDOR_H


class Servidor {
friend class Cliente;
private:
    QString endereco;
    QString port;
public:
    void conectar(Cliente c){
        //código para conexão
    }
    void desconectar(){
        //código para desconexão
    }
    void mudaEndereco(QString newend){
        this->endereco=newend;
    }
    void mudaPort(QString newport){
        this->port=newport;
    }
    QString pegaEndereco(){
        return endereco;
    }
    QString pegaPort(){
        return port;
    }
};
