int tonePin = 6;
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);

}

bool flag = false;
void loop() {
  bool btnState = !digitalRead(3);
  if (btnState && !flag) {  // обработчик нажатия
    flag = true;
    Serial.print("2 \n");
  }
  if (!btnState && flag) {  // обработчик отпускания
    flag = false; 
    noTone(tonePin) 
  }
  bool btnState1 = !digitalRead(4);
  if (btnState1 && !flag) {  // обработчик нажатия
    flag = true;
    Serial.print("3 \n");
  }
  if (!btnState1 && flag) {  // обработчик отпускания
    flag = false;  
  }
  bool btnState2 = !digitalRead(5);
  if (btnState2 && !flag) {  // обработчик нажатия
    flag = true;
    Serial.print("4 \n");
  }
  if (!btnState2 && flag) {  // обработчик отпускания
    flag = false;  
  }
  bool btnState3 = !digitalRead(6);
  if (btnState3 && !flag) {  // обработчик нажатия
    flag = true;
    Serial.print("5 \n");
  }
  if (!btnState3 && flag) {  // обработчик отпускания
    flag = false;  
  }
  bool btnState4 = !digitalRead(2);
  if (btnState4 && !flag) {  // обработчик нажатия
    flag = true;
    Serial.print("1 \n");
  }
  if (!btnState4 && flag) {  // обработчик отпускания
    flag = false;  
  }




}
