# MedConnect
Este é um código em C++ desenvolvido para plataformas ESP32 que possibilita o monitoramento remoto de batimentos cardíacos utilizando a plataforma TagoIO, integrado e simulado na plataforma Wokwi. O dispositivo, nomeado "RecuFit", gera valores randômicos simulando batimentos cardíacos e os envia para a plataforma TagoIO por meio do protocolo MQTT.

#Entendimento do Problema
 A gestão manual de registros hospitalares representa um desafio tanto para os médicos quanto para os pacientes. Especialmente os pacientes mais idosos ou com prioridades não podem passar horas em filas de espera. Diante disso, torna-se evidente a necessidade crescente de uma solução que integre registros eletrônicos e IoT para proporcionar uma gestão eficiente, acessível e proativa da saúde. Essa abordagem contribuirá significativamente para auxiliar nas tomadas de decisões e superar as dificuldades no monitoramento contínuo da saúde dos pacientes. 

#Nosso Objetivo
Desenvolver uma solução inovadora de gestão hospitalar que integre registros eletrônicos, IoT e medicina online. Buscamos proporcionar uma administração eficiente e acessível da saúde, reduzindo o tempo de espera, especialmente para pacientes vulneráveis como os idosos. A implementação da medicina online permitirá consultas virtuais, melhorando o acesso à saúde. O foco é contribuir para decisões informadas e ágeis, superando desafios na gestão manual de registros e promovendo uma transformação positiva na prestação de serviços de saúde, com ênfase na segurança da informação e privacidade dos pacientes. 

#Visão Geral da Solução
O programa de acompanhamento da frequência cardíaca integrado ao RecuFit estabelece uma conexão essencial, permitindo aos médicos monitorar em tempo real como os pacientes respondem aos exercícios recomendados. Essa integração oferece uma compreensão mais precisa do impacto fisiológico das atividades, identificando exercícios potencialmente prejudiciais. Ao utilizar dados da frequência cardíaca, os médicos podem ajustar os regimes de exercícios de maneira personalizada, otimizando a eficácia do RecuFit e proporcionando cuidados de reabilitação sob medida para cada paciente.

#Pré-requisitos
Plataforma de simulação: https://wokwi.com/projects/382237097155577857
IDE Arduino: Certifique-se de ter a Arduino IDE instalada para carregar o código no ESP32.
Bibliotecas: Instalar ArduinoJson e EspMQTTClient em sua Arduino IDE antes de carregar o código.

#Configuração de Ambiente
Antes de utilizar o código, é necessário configurar algumas variáveis no início do código:
-Wi-Fi: Substitua "Wokwi-GUEST" e "" pelos valores da sua rede Wi-Fi e senha. -MQTT: Configure o endereço do servidor MQTT, o usuário (geralmente "Default" para TagoIO), o código do token TagoIO e o nome do dispositivo. -Tópico MQTT: O tópico MQTT utilizado para enviar os dados ("frequencia").

#Configuração de Rede e MQTT
Antes de usar o código, é necessário realizar algumas configurações:
Utilização
-Carregue o código no seu ESP32 usando a Arduino IDE. -Abra o Monitor Serial para visualizar os valores randômicos gerados. -Os valores são publicados no tópico MQTT configurado e enviados para a plataforma TagoIO.
Observação:
-O código utiliza a biblioteca 'ArduinoJson' para formatar o JSON e a biblioteca 'EspMQTTClient' para comunicação MQTT. -O valor randômico gerado simula os batimentos cardíacos e é enviado a cada 5 segundos. -Certifique-se de configurar corretamente as credenciais Wi-Fi, MQTT e TagoIO antes de carregar o código.
