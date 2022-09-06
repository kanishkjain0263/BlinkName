// Name: Kanishk Jain
// Roll Number: 2110994767
// Task 2.1P

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

void dot() {   //Method to blink a short burst of light to represent a dot
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash() {   //Method to blink a long burst of light to represent a dash
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(600);
}

void loop() {
  //Writing the word "K A N I S H K" in morse code

//  K
  dash();
  dot();
  dash();
  delay(1000);
//  A
    dot();
    dash();
  delay(1000);    
//  N
  dash();
  dot();
  delay(1000);
//  I
  dot();
  dot();
    delay(1000);
//  S
  dot();
  dot();
  dot();
    delay(1000);
//  H
  dot();
  dot();
  dot();
  dot();
    delay(1000);
//  K
  dash();
  dot();
  dash();
    delay(1000);
}
