/*Bluetooth control car with Arduino Nano board
   Home Page
*/
//motor one
#define IN1 2
#define IN2 3
//motor two
#define IN3 4
#define IN4 5
#define PUMP 6

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(PUMP, OUTPUT);    // FIXED
  digitalWrite(PUMP, LOW); // FIXED
}

void loop() {
  if (Serial.available() > 0) {
    char value = Serial.read();
    Serial.println(value);
    if (value == 'U') {
      Backward();
      PumpOFF();            // FIXED
    } else if (value == 'D') {
      Forward();
      PumpOFF();            // FIXED
    } else if (value == 'S') {
      Stop();
      PumpOFF();            // FIXED
    } else if (value == 'L') {
      Left();
      PumpOFF();            // FIXED
    } else if (value == 'R') {
      Right();
      PumpON();
    }
  }
}

void Forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void Backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void Stop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void Left() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void Right() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void PumpON() {
  digitalWrite(PUMP, HIGH);
}

void PumpOFF() {
  digitalWrite(PUMP, LOW);
}
