// #include <DFPlayerMini_Fast.h>
// // #include <string> 

// // #if !defined(UBRR1H)
// #include <SoftwareSerial.h>
// SoftwareSerial mySerial(11, 10); // RX, TX
// // #endif

// DFPlayerMini_Fast player;
// int n, current;

// void setup()
// {
//   Serial.begin(115200);
//   mySerial.begin(9600);
//   player.begin(mySerial);
//   player.stop();
//   player.volume(25);
//   player.randomAll();
// }

// void loop()
// {
//   // delay(10000);
//   // player.stop();
//   // delay(10000);
//   // player.randomAll();
//   // if(!player.isPlaying()) {
//   //   current++;
//   //   if(current > n){
//   //     current = 1;
//   //   }
//   //   player.play(current);
//   // }
//   delay(2000);
//   Serial.println("i'm alive");
// }