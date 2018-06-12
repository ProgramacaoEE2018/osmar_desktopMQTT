
 //   Header da classe cliente, foi optado declaração in line por problemas de compilação

#ifndef CLIENT_H
#define CLIENT_H

#endif // CLIENT_H

class Cliente {   // declaração da classe Cliente
friend class Servidor;    // servidor tem acesso aos atributos para conexão
private :
    QString clientID;
    QString password;
    QString username;
public:
    // getters
    QString pegaClientID(){
        return this->clientID;
    };
    QString pegaPassword(){
        return this->password;
    }
    QString pegaUsername(){
        return this->username;
    }

    //setters
    void mudaClientID(QString newClient){
        this->clientID=newClient;
        }
    void mudaPassword(QString newPass){
        this->password=newPass;
    }
    void mudaUsername(QString newUser){
        this->username=newUser;
    }
};
