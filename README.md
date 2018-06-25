# Desktop MQTT

## Descrição
O programa tem como objetivo a conexão a um servidor MQTT local ou remoto, através de um cliente para acionamento de uma carga binária (ligado/desligado), no caso uma lâmpada.
## Motivação
Com o desenvolvimento do programa, é possivel o aprimoramento futuro de técnicas de manipulação de dados e automação a partir dos protocolos utilizados aqui, aprofundando assim o conhecimento de Internet das Coisas, para o desenvolvimentos de novas tecnologias nessa área.

## Documentação
#### Diagrama de Classses
![Diagrama de Classes](/documentos/Diag_Classe.png)
#### Fluxograma
![Fluxograma](/documentos/Flux.png)
#### Tutorial QT
O tutorial escolhido para a implementação do código no formato **QT** foi o do link https://www.youtube.com/watch?v=NXSQf1GjjZU&list=PL0meOoSt675fF8xBzifArQyGwfZ-39SGA, que gerou a seguinte aplicação por exemplo:
![Tutorial](/documentos/Tutorial.png)
#### Esboço GUI
![Esboço GUI](/documentos/draftGUI.png)


## Instrução de compilação para Windows 10 32-bits

Para compilação do programa na pasta MQTT_GUI, foi utilizado QT Creator 4.6.1 com o kit MinGW 5.3.0 , logo será necessário a instalação do mesmo. Para tal é necessário a seleção do projeto MQTT_GUI.pro que estará incluido os arquivos necessários. Após isso será necessário fazer o *build* do projeto, que será montado em um diretório de acordo com a configuração do QT Creator. Agora utilizando o *QT 5.10.1 for Desktop* deve-se ir a pasta onde o executável foi montado e digitar "windeployqt.exe --quick --no-translations ." o que fará instalar as dependências do executável. Com isso o programa estará pronto para ser executado.

## Utilização do programa

Para utilização do programa deve ser colocado o usuário e senha do mesmo no primeiro box, e o endereço do servidor e porta no segundo box. Apertando o botão conectar o programa tentará fazer a conexão com o servidor. No momento essa funcionalidade não está disponível, sendo no lugar mostrado com um MensageBox as informações que seriam utilizadas para tal conexão. Em caso de conexão o status muda, mostrando Conectado, e o botão assume a função de desconexão. Com a conexão estabelecida, os comandos para lâmpada podem ser acionados, de acordo com o QoS (Quality of Service ou Qualidade de Serviço, que indica o tipo de mensagem que quer ser enviada de acordo com os padrões MQTT) e o tópico/endereço da mensagem no servidor. Essa funcionalidade também no momento não está implementada, sendo assim mostrado a ação que seria enviada para o Servidor (ligar, desligar ou trocar o estado) através de um MensageBox.
