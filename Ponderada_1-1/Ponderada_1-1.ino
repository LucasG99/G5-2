
//Vivian
//
#include <Arduino.h> // to include an arduino library

void setup() { // void setup is "static" while void loop works like the "for" function
    Serial.begin(9600); // establish serial communication
}

//Lucas Galvão
void loop() {
    // Entrada de dados do usuário
    String nome;
    Serial.print("Digite o seu nome: ");
    while (!Serial.available());
    nome = Serial.readStringUntil('\n');
    nome.trim(); 

  //Stefano
   // Variaveis 
    int idade =25;
    float altura=1.75;
    bool temFilhos=true;
    String esporteFavorito="futebol";
    
    // Isabela
    // Impressão de dados no prompt de comando
    Serial.print("Olá, ");
    Serial.println(nome);
    
    //Vitor
    // Condições if e if-else aninhadas
    if (idade >= 18) {
        if (temFilhos) {
            Serial.println("Você é maior de idade e tem filhos.");
        } else {
            Serial.println("Você é maior de idade, mas não tem filhos.");
        }
    } else {
        Serial.println("Você é menor de idade.");
    }
    
