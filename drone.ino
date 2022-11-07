
//moter one
int m1 = 8;
int m2 = 9;
// motor two 
int m3 = 13;
int m4 = 12;
char val;

// drone takes off
void takeoff()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
}
void land()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);


  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);

  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
//  takeoff();
  if(Serial.available() > 0)
  {
    val = Serial.read(); 
  }

  switch(val)
  {
    case 't':
     takeoff();
     break;
    case 's':
      land();
      break; 
  }

}
