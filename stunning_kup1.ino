char read;
void setup() {
  for (int i=2;i<=5;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available()){
    char read=Serial.read() ;
    switch (read){
      case 'f':digitalWrite(5,1);
      digitalWrite(3,1);
      analogWrite(9,120);
      analogWrite(10,120);

      break;
      case 'b':digitalWrite(2,1);
      digitalWrite(4,1);
      analogWrite(9,120);
      break;
      case 'r':digitalWrite(5,1);
      analogWrite(9,120);
      analogWrite(10,120);
      
      break;
      case 'l':digitalWrite(3,1);
      analogWrite(9,120);
      analogWrite(10,120);
      
      break;
      case 's':digitalWrite(5,0);
      digitalWrite(2,0);
      digitalWrite(4,0);
       digitalWrite(3,0);
      break;

    }

  }

  // put your main code here, to run repeatedly:

}
