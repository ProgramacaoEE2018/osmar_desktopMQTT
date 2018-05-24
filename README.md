# Desktop MQTT
## Descrição
Esse projeto tem como objetivo o desenvolvimento de um software para controle de cargas (lâmpadas, motores) remotamente via um servidor *broker* MQTT, utilizando conceitos de Internet das Coisas, para aprendizado e implementação de solução válida.

## Passos
- [x] Criaçao do repositório e README
- [x] Diagrama de classes e relacionamentos (fluxograma,digrama de classes e relacionamentos via EA ou Doxygen)
- [x] Escolha da biblioteca gráfica
- [x] Esboço GUI
- [ ] Código Funcional

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

A aplicação permite a configuração do usuário e endereço do servidor *broker* via linha de texto, com cada configuração da conexão indicado. Com a conexão feita, o *label* em vermelho se tornará verde e escrito CONECTADO, e o usuário poderá escolher o comando a ser dado a Lâmpada cujas configurações serão inseridas na parte inferior aos botões.
