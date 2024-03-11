
// // constants won't change
// const int LIGHT_SENSOR_PIN = A0; // Arduino pin connected to light sensor's  pin
// // const int LED_PIN          = 3;  // Arduino pin connected to LED's pin
// const int ANALOG_THRESHOLD = 500;

// // variables will change:
// int analogValue;

// void setup() {
//   Serial.begin(9600);
//   Serial.println("hello world"); 
//   // pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
// }

// void loop() {
//   Serial.println("Hello World!");
//   analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
//   Serial.println(analogValue); 

//   if(analogValue < ANALOG_THRESHOLD)
//     Serial.println(" OFF "); 
//   else
//     Serial.println(" ON "); 

//   delay(1000);
//   exit(0);
// }