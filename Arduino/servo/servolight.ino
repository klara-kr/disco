// #include <Servo.h>

// Servo myservo;  // create servo object to control a servo
// // constants won't change
// const int LIGHT_SENSOR_PIN = A0; // Arduino pin connected to light sensor's  pin
// const int ANALOG_THRESHOLD = 800;

// bool started = false;

// // variables will change:
// int analogValue;

// void setup() {
//   Serial.begin(9600);
//   Serial.println("hello world"); 

//   // setup servo
//   myservo.attach(9);  // attaches the servo on pin 9 to the servo object
// }

// void loop() {
//   analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
//   Serial.println(analogValue);

//   delay(100);

//   if(started) {
//     if(analogValue < ANALOG_THRESHOLD) {
//       Serial.println(" OFF "); 
//       stopServo();
//       started = false;
//       return;
//     }
//     Serial.println(" NOTHING BUT ON "); 
//   } else {
//     if(analogValue >= ANALOG_THRESHOLD) {
//       Serial.println(" ON "); 
//       startServo();
//       started = true;
//       return;
//     }
//     Serial.println(" NOTHING BUT OFF "); 
//   }
// }

// void startServo() {
//   myservo.write(92);
// }

// void stopServo() {
//   myservo.write(90);
// }
