#define STEP_PIN 14 
#define DIR_PIN 12   
#define ENABLE_PIN 33 

#define EN_PWR_PIN 15  

const int stepsPerRevolution87dot4degree = 388;  
const int stepsPerRevolution1dot3degree = 6;
const int stepsPerRevolutionback = 406;
const int stepDelay = 3000;  

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(ENABLE_PIN, OUTPUT);
  pinMode(EN_PWR_PIN, OUTPUT);
  digitalWrite(EN_PWR_PIN, LOW); 
  digitalWrite(ENABLE_PIN, LOW);
}

void loop() {
  digitalWrite(DIR_PIN, LOW);  
  for (int i = 0; i < stepsPerRevolution87dot4degree; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }
    
  powerOnLaser();


  delay(40000);

  powerOffLaser();
  
  for (int i = 0; i < stepsPerRevolution1dot3degree; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }
  powerOnLaser();


  delay(40000);

  powerOffLaser();
  
  for (int i = 0; i < stepsPerRevolution1dot3degree; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }
  powerOnLaser();


  delay(40000);

  powerOffLaser();
  
  for (int i = 0; i < stepsPerRevolution1dot3degree; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }
  powerOnLaser();



  delay(40000);

  powerOffLaser();
  
  
  digitalWrite(DIR_PIN, HIGH); 
  for (int i = 0; i < stepsPerRevolutionback; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(stepDelay);
  }


  delay(1000);
}

void powerOnLaser() {
    digitalWrite(EN_PWR_PIN, HIGH);
    delay(100);
}

void powerOffLaser() {
    digitalWrite(EN_PWR_PIN, LOW);
    delay(100);
}

