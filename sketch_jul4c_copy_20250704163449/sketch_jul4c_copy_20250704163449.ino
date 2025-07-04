
const int BUTTON1_PIN = 26; 
const int BUTTON2_PIN = 27;
const int BUTTON3_PIN = 28;
const int BUTTON4_PIN = 29; 

const int LED1_PIN = 6;  
const int LED2_PIN = 7;  
const int LED3_PIN = 0; 

const int BLINK_DELAY_MS = 50;

void setup() {
  
  pinMode(BUTTON1_PIN, INPUT_PULLUP);
  pinMode(BUTTON2_PIN, INPUT_PULLUP);
  pinMode(BUTTON3_PIN, INPUT_PULLUP);
  pinMode(BUTTON4_PIN, INPUT_PULLUP);

  
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);

 
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, LOW);
}

void loop() {
 
  bool currentButton1State = !digitalRead(BUTTON1_PIN);
  bool currentButton2State = !digitalRead(BUTTON2_PIN);
  bool currentButton3State = !digitalRead(BUTTON3_PIN);
  bool currentButton4State = !digitalRead(BUTTON4_PIN);

  
  if (currentButton1State && currentButton2State && currentButton3State && currentButton4State) {
    
    digitalWrite(LED1_PIN, HIGH);
    digitalWrite(LED2_PIN, HIGH);
    digitalWrite(LED3_PIN, HIGH);
    delay(BLINK_DELAY_MS);
    digitalWrite(LED1_PIN, LOW);
    digitalWrite(LED2_PIN, LOW);
    digitalWrite(LED3_PIN, LOW);
    delay(BLINK_DELAY_MS);
  } else {
    
    if (currentButton4State) {
      
      digitalWrite(LED1_PIN, HIGH); 
      digitalWrite(LED2_PIN, HIGH); 
      digitalWrite(LED3_PIN, HIGH); 
    } else {
    
     
      if (currentButton1State) {
        digitalWrite(LED1_PIN, HIGH); 
      } else {
        digitalWrite(LED1_PIN, LOW);  
      }

      
      if (currentButton2State) {
        digitalWrite(LED2_PIN, HIGH);
      } else {
        digitalWrite(LED2_PIN, LOW); 
      }

      
      if (currentButton3State) {
        digitalWrite(LED3_PIN, HIGH); 
      } else {
        digitalWrite(LED3_PIN, LOW); 
      }
    }
  }
}