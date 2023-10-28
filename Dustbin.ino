int IR_1 = 8;
int IR_2 = 9;
int Moisture_1 = A4;
int Moisture_2 = A5;


void setup() {
  Serial.begin(9600);
  pinMode(IR_1, INPUT);
  pinMode(IR_2, INPUT);

}

void loop() {
  if(digitalRead(IR_1) == HIGH || digitalRead(IR_2) == HIGH ){
    Serial.println("No Obstacle Detected");
    delay(1000);
  }else if(digitalRead(IR_1) == LOW || digitalRead(IR_2) == LOW){
    Serial.println("Obstacle Detected");
    delay(1000);
  }

}
