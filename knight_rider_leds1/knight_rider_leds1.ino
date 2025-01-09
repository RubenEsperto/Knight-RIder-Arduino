/*
    Programador....: (c) 2025 Ruben Esperto
    Data...........: 07/01/2025
*/
const byte LED_PIN[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

const byte DELAY = 100;

void setup(void)    {
  for(byte i = 0; i <= 9;i++)    {
    pinMode(LED_PIN[i], OUTPUT);
  }
}

void loop(void)    {

  for(byte i = 9; ((i >= 0) && (i <= 9));i--){
    digitalWrite(LED_PIN[i], HIGH);
    delay(DELAY);
    digitalWrite(LED_PIN[i], LOW);
    delay(DELAY);
  }
  for(byte i = 0; ((i >= 0) && (i <= 9));i++){
    digitalWrite(LED_PIN[i], HIGH);
    delay(DELAY);
    digitalWrite(LED_PIN[i], LOW);
    delay(DELAY);
  }
}
