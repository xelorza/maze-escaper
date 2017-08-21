#include <AFMotor.h>

#define trigPin1 22
#define echoPin1 23
#define trigPin2 24
#define echoPin2 25
#define trigPin3 26
#define echoPin3 27
#define trigPin4 28
#define echoPin4 29
#define trigPin5 30
#define echoPin5 31
#define trigPin6 32
#define echoPin6 33
#define trigPin7 34
#define echoPin7 35
#define trigPin8 36
#define echoPin8 37

AF_DCMotor motor1(1, MOTOR12_64KHZ);
AF_DCMotor motor2(2, MOTOR12_64KHZ);
AF_DCMotor motor3(3, MOTOR12_64KHZ);
AF_DCMotor motor4(4, MOTOR12_64KHZ);

void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
  pinMode(trigPin5, OUTPUT);
  pinMode(echoPin5, INPUT);
  pinMode(trigPin6, OUTPUT);
  pinMode(echoPin6, INPUT);
  pinMode(trigPin7, OUTPUT);
  pinMode(echoPin7, INPUT);
  pinMode(trigPin8, OUTPUT);
  pinMode(echoPin8, INPUT);

  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor3.setSpeed(200);
  motor4.setSpeed(200);
  
}

void loop() {
  long duration1, distance1;
  long duration2, distance2;
  long duration3, distance3;
  long duration4, distance4;
  long duration5, distance5;
  long duration6, distance6;
  long duration7, distance7;
  long duration8, distance8;
  
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1 / 2) / 29.1;

  digitalWrite(trigPin2, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin2, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration2 / 2) / 29.1;

  digitalWrite(trigPin3, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin3, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3 = (duration3 / 2) / 29.1;

  digitalWrite(trigPin4, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin4, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin4, LOW);
  duration4 = pulseIn(echoPin4, HIGH);
  distance4 = (duration4 / 2) / 29.1;

  digitalWrite(trigPin5, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin5, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin5, LOW);
  duration5 = pulseIn(echoPin5, HIGH);
  distance5 = (duration5 / 2) / 29.1;

  digitalWrite(trigPin6, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin6, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin6, LOW);
  duration6 = pulseIn(echoPin6, HIGH);
  distance6 = (duration6 / 2) / 29.1;

  digitalWrite(trigPin7, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin7, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin7, LOW);
  duration7 = pulseIn(echoPin7, HIGH);
  distance7 = (duration7 / 2) / 29.1;

  digitalWrite(trigPin8, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin8, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin8, LOW);
  duration8 = pulseIn(echoPin8, HIGH);
  distance8 = (duration8 / 2) / 29.1;

  if (distance1 >= 50 || distance1 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance1);
    Serial.println(" cm -d1");
  }
  if (distance2 >= 50 || distance2 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance2);
    Serial.println(" cm -d2");
  }
  if (distance3 >= 50 || distance3 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance3);
    Serial.println(" cm -d3");
  }
  if (distance4 >= 50 || distance4 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance4);
    Serial.println(" cm -d4");
  }
  if (distance5 >= 50 || distance5 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance5);
    Serial.println(" cm -d5");
  }
  if (distance6 >= 50 || distance6 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance6);
    Serial.println(" cm -d6");
  }
  if (distance7 >= 50 || distance7 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance7);
    Serial.println(" cm -d7");
  }
  if (distance8 >= 50 || distance8 <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance8);
    Serial.println(" cm -d8");
  }

  if (distance1 >= 10 && distance2 >= 10 && distance3 >= 10) {
      motor1.run(FORWARD);
      motor2.run(FORWARD);
      motor3.run(FORWARD);
      motor4.run(FORWARD);
     delay(1000);
  }

  else  {
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
    delay(1000);
  }  
  delay(500);
}
