// Michael Montella 91417

// declare any constants
const int buttonPin = 2;
const int led1Pin = 3;
const int led2Pin = 4;

// declare any variables
int buttonState;

void setup() {
  // put your setup code here, to run once:

  // set pin modes
  pinMode(buttonPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);

  // initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == 1) {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
  } else {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, LOW);
  }
}
