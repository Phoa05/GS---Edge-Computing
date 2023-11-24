<h1>MedConnect</h1>
Monitoramento Remoto de Batimentos Cardíacos com ESP32 e TagoIO
<br>
O MedConnect é um projeto em C++ desenvolvido para plataformas ESP32, que permite o monitoramento remoto de batimentos cardíacos. O dispositivo, denominado "MedConnect", gera valores simulando batimentos cardíacos e os envia para a plataforma TagoIO por meio do protocolo MQTT. A integração e simulação ocorrem na plataforma Wokwi.

<h2>Entendimento do Problema</h2>
A gestão manual de registros hospitalares representa um desafio tanto para médicos quanto para pacientes. Especialmente os mais idosos ou com prioridades não podem passar horas em filas de espera. O MedConnect busca oferecer uma solução que integre registros eletrônicos e IoT para proporcionar uma gestão eficiente, acessível e proativa da saúde. Isso contribuirá para decisões informadas, superando as dificuldades no monitoramento contínuo da saúde dos pacientes.

<h2>Nosso Objetivo</h2>
Desenvolver uma solução inovadora de gestão hospitalar que integre registros eletrônicos, IoT e medicina online. A meta é proporcionar uma administração eficiente e acessível da saúde, reduzindo o tempo de espera, especialmente para pacientes vulneráveis como os idosos. A implementação da medicina online permitirá consultas virtuais, melhorando o acesso à saúde. O foco é contribuir para decisões informadas e ágeis, superando desafios na gestão manual de registros e promovendo uma transformação positiva na prestação de serviços de saúde, com ênfase na segurança da informação e privacidade dos pacientes.

<h2>Visão Geral da Solução</h2>
O programa de acompanhamento da frequência cardíaca integrado ao MedConnect estabelece uma conexão essencial, permitindo aos médicos monitorar em tempo real como os pacientes para assim poder fazer um melhor direcionamento

<h2>Pré-requisitos</h2>
-Plataforma de simulação: https://wokwi.com/projects/382237097155577857<br>
-IDE Arduino: Certifique-se de ter a Arduino IDE instalada para carregar o código no ESP32.<br>  
-Bibliotecas: Instalar ArduinoJson e EspMQTTClient em sua Arduino IDE antes de carregar o código.
<h2>Configuração de Ambiente</h2>
Antes de utilizar o código, é necessário configurar algumas variáveis no início do código:
<br>
-Wi-Fi: Substitua "Wokwi-GUEST" e "" pelos valores da sua rede Wi-Fi e senha.<br>  
-MQTT: Configure o endereço do servidor MQTT, o usuário (geralmente "Default" para TagoIO), o código do token TagoIO e o nome do dispositivo.<br>  
-Tópico MQTT: O tópico MQTT utilizado para enviar os dados ("frequencia").  
<h2>Configuração de Rede e MQTT</h2>
Antes de usar o código, realize as seguintes configurações:
<br>
-Carregue o código no seu ESP32 usando a Arduino IDE.<br>  
-Abra o Monitor Serial para visualizar os valores randômicos gerados.<br> 
-Os valores são publicados no tópico MQTT configurado e enviados para a plataforma TagoIO.<br>  
Observação:<br>
O código utiliza a biblioteca 'ArduinoJson' para formatar o JSON e a biblioteca 'EspMQTTClient' para comunicação MQTT.<br>
O valor gerado simula os batimentos cardíacos e é enviado a cada 5 segundos.<br>  
Certifique-se de configurar corretamente as credenciais Wi-Fi, MQTT e TagoIO antes de carregar o código.  
