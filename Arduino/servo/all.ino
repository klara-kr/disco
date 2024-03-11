#include <Servo.h>
#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

// light sensor
const int LIGHT_SENSOR_PIN = A0; // Arduino pin connected to light sensor's  pin
const int ANALOG_THRESHOLD = 800;
int analogValue; // current light value

// servo motor
Servo myservo;  // create servo object to control a servo

// player
SoftwareSerial mySerial(11, 10); // RX, TX
DFPlayerMini_Fast player;

// local state
bool started = false;

void setup() {
  // global setup
  Serial.begin(9600);
  Serial.println("starting project disco ball O_O");

  // setup servo
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  // player
  Serial.begin(115200);
  mySerial.begin(9600);
  player.begin(mySerial);
  player.stop();
  player.volume(25);
}

void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
  Serial.println(analogValue);

  delay(100);

  if(started) {
    if(analogValue < ANALOG_THRESHOLD) {
      Serial.println(" OFF "); 
      player.stop();
      stopServo();
      started = false;
      return;
    }
    Serial.println(" NOTHING BUT ON "); 
  } else {
    if(analogValue >= ANALOG_THRESHOLD) {
      Serial.println(" ON "); 
      player.randomAll();
      startServo();
      started = true;
      return;
    }
    Serial.println(" NOTHING BUT OFF "); 
  }
}

void startServo() {
  myservo.write(92);
}

void stopServo() {
  myservo.write(90);
}