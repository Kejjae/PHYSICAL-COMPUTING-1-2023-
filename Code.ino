#define BUZZER_PIN 2

void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(BUZZER_PIN,OUTPUT);

}

void loop(){
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(500);

  if (sensorValue >= 900){ //900 เป็นค่าความชื้น
    digitalWrite(13, HIGH);
    digitalWrite(BUZZER_PIN,LOW);    //เปิดเสียงเตือน
    Serial.println("รดน้ำหน่อยจ้า");
  }

  else if (sensorValue < 900){
    digitalWrite(13, LOW);
    digitalWrite(BUZZER_PIN,HIGH);   //ปิดเสียงเตือน

  }
}

