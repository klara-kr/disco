// #include "Arduino.h"
// #include "SoftwareSerial.h"
// #include "DFRobotDFPlayerMini.h"

// // const int sensor = 4; //Magnet sensor

// int state; // 0 close - 1 open wwitch

// SoftwareSerial mySoftwareSerial(11, 10); // RX, TX
// DFRobotDFPlayerMini player;
// void printDetail(uint8_t type, int value);

// void setup()
// {

//   mySoftwareSerial.begin(9600);
//   Serial.begin(115200);
  
//   Serial.println(F("DFRobot DFPlayer Mini Demo"));
//   Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
//   player.setTimeOut(10000000000);
//   if (player.begin(mySoftwareSerial,false,true)) {
//     Serial.println(F("DFPlayer Mini online."));
//   } else {
//     //Use softwareSerial to communicate with mp3.
//     Serial.println(F("Unable to begin"));
//   }
//   printDetail(player.readType(), player.read());

  

//   player.outputDevice(DFPLAYER_DEVICE_SD);
//   Serial.println("pouet");
//   player.volume(30);  //Set volume value. From 0 to 30
//   Serial.println("pouet");
  
// }

// void loop()
// {
//   //player.play(1);


//   uint8_t current = player.readType();

//   // #define DFPlayerPlayFinished 5
//   // if(current == 5); {
//   //   isPlaying = false;
//   // }

//   delay(100000);
//   printDetail(player.readType(), player.read());
// }

// void printDetail(uint8_t type, int value){
//   switch (type) {
//     case TimeOut:
//       Serial.println(F("Time Out!"));
//       break;
//     case WrongStack:
//       Serial.println(F("Stack Wrong!"));
//       break;
//     case DFPlayerCardInserted:
//       Serial.println(F("Card Inserted!"));
//       break;
//     case DFPlayerCardRemoved:
//       Serial.println(F("Card Removed!"));
//       break;
//     case DFPlayerCardOnline:
//       Serial.println(F("Card Online!"));
//       break;
//     case DFPlayerPlayFinished:
//       Serial.print(F("Number:"));
//       Serial.print(value);
//       Serial.println(F(" Play Finished!"));
//       break;
//     case DFPlayerError:
//       Serial.print(F("DFPlayerError:"));
//       switch (value) {
//         case Busy:
//           Serial.println(F("Card not found"));
//           break;
//         case Sleeping:
//           Serial.println(F("Sleeping"));
//           break;
//         case SerialWrongStack:
//           Serial.println(F("Get Wrong Stack"));
//           break;
//         case CheckSumNotMatch:
//           Serial.println(F("Check Sum Not Match"));
//           break;
//         case FileIndexOut:
//           Serial.println(F("File Index Out of Bound"));
//           break;
//         case FileMismatch:
//           Serial.println(F("Cannot Find File"));
//           break;
//         case Advertise:
//           Serial.println(F("In Advertise"));
//           break;
//         default:
//           break;
//       }
//       break;
//     default:
//       break;
//   }
// }
