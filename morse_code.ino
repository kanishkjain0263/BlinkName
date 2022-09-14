// Name: Kanishk Jain
// Roll No: 2110994767
//-----------------String to Morse Code Converter-----------------------


//Enter your name/string below: 
String name = "KANISHK";

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   // Initializing the built in LED
}

void loop() {
  for (int i = 0; i < name.length(); i++) {   // For loop to take the aplhabets of the string one by one and blink the LED accordingly
    MorseConverter(name[i]);
  }
}

void dot() {   //Function to blink a short burst of light to represent a dot
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash() {   //Function to blink a long burst of light to represent a dash
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(600);
}

void MorseConverter(char L) {
  if (L == 'A') {
    dot();;
    dash();
    delay(200);
  }
  if (L == 'B')
  {
    dash();;
    dot();;
    dot();;
    dot();;
    delay(200);
  }
  if (L == 'C')
  {
    dash();
    dot();;
    dash();
    dot();;
    delay(200);
  }
  if (L == 'D')
  {
    dash();
    dot();;
    dot();;
    delay(200);
  }

  if (L == 'E')
  {
    dot();;
    delay(200);
  }

  if (L == 'F')
  {
    dot();;
    dot();;
    dash();
    dot();;
    delay(200);
  }

  if (L == 'G')
  {
    dash();
    dash();
    dot();
    delay(200);
  }

  if (L == 'H')
  {
    dot();
    dot();
    dot();
    dot();
    delay(200);
  }

  if (L == 'I')
  {
    dot();
    dot();
    delay(200);
  }

  if (L == 'J')
  {
    dot();
    dash();
    dash();
    dash();
    delay(200);
  }

  if (L == 'K')
  {
    dash();
    dot();
    dash();
    delay(200);
  }

  if (L == 'L')
  {
    dot();
    dash();
    dot();
    dot();
    delay(200);
  }

  if (L == 'M')
  {
    dash();
    dash();
    delay(200);
  }

  if (L == 'N')
  {
    dash();
    dot();
    delay(200);
  }

  if (L == 'O')
  {
    dash();
    dash();
    dash();
    delay(200);
  }


  if (L == 'P')
  {
    dot();
    dash();
    dash();
    dot();
    delay(200);
  }

  if (L == 'Q')
  {
    dash();
    dash();
    dot();
    dash();
    delay(200);
  }

  if (L == 'R')
  {
    dot();
    dash();
    dot();
    delay(200);
  }

  if (L == 'S')
  {
    dot();
    dot();
    dot();
    delay(200);
  }

  if (L == 'T')
  {
    dash();
    delay(200);
  }

  if (L == 'U')
  {
    dot();
    dot();
    dash();
    delay(200);
  }

  if (L == 'V')
  {
    dot();
    dot();
    dot();
    dash();
    delay(200);
  }

  if (L == 'W')
  {
    dot();
    dash();
    dash();
    delay(200);
  }

  if (L == 'X')
  {
    dash();
    dot();
    dash();
    dot();
    delay(200);
  }

  if (L == 'Y')
  {
    dot();
    dash();
    dash();
    dash();
    delay(200);
  }

  if (L == 'Z')
  {
    dot();
    dash();
    delay(200);
  }
}
