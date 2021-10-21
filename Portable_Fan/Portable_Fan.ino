const int POT_PIN = A3;
const int PWM_OUT_PIN = 1;

int potReading;
int pwmValue;


void setup() {
    
}


void loop() {
    potReading = analogRead(POT_PIN) / 100;

    pwmValue = map(potReading, 0, 10, 0, 255);
    
    analogWrite(PWM_OUT_PIN, pwmValue);
}
