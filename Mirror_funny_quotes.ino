/**
 * @file Mirror_quotes.ino
 * @author Devon Barclay (https://github.com/devonbarks)
 * @brief This project is meant to be used with 3 Adafruit LED Alphanumeric backpacks.
 * @version 0.1
 * @date 2021-12-06
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <Adafruit_LEDBackpack.h>

String message0 = "THE MANNY WILL NOT BE TELEVISED            ";
String message1 = "ANY FEMALE BORN AFTER 1993 CAN'T COOK. ALL THEY KNOW IS McDONALDS, CHARGE THEY PHONE, TWERK, BE BISEXUAL, EAT HOT CHIP AND LIE.            ";
String message2 = "WHAT THE FUCK IS UP KYLE? NO WHAT DID YOU SAY? WHAT THE FUCK DUDE? STEP THE FUCK UP KYLE.            ";
String message3 = "TWO BROS. CHILLIN' IN THE HOT TUB. FIVE FEET APART CAUSE THEY'RE NOT GAY.            ";
String message4 = "HI WELCOME TO CHILIS            ";
String message5 = "HOW MANY OF YALL MAMA BEEN GOOD SHE COOK THAT COLLARD GREEN FAT BACK BISCUIT WITH A CORN ON THE COBB            ";
String message6 = "WALTER WALTER WALTER WALTER WALTER WALTER WALTER WALTER            ";
String message7 = "'GOING TO THE HOSPITAL, THEN THE MALL.' - CAROLYN BARCLAY MAY 30TH             ";
String message8 = "'OUR BRAINS ARE SICK BUT THAT'S OKAY I GUESS LOL SAME.' - JON            ";
String message9 = "'IDK LMAO. IT'S DARK AS DICKS' - DEVON            ";
String message10 = "'MESS WITH THE HORNS, YOU GET THE BULL' - NICK            ";
String message11 = "'WHEN I SAY SONIC SPEED... I MEAN SONIC SPEED' - DEVON ON THE WAY TO THE TWENTY ONE PILOTS CONCERT.            ";
String message12 = "'IT'S NOT OHIO UNLESS CHRISTINE INSULTS AT LEAST ONE OF THE BAND MEMBERS' - BRIDGET            ";
String message13 = "'THE EARTH EXISTED AND ONE ORGANISM WAS LIKE 'LOL I'M GONNA EXIST' ' - SADIE            ";
String message14 = "'DON'T BE SAD. BECAUSE SAD BACKWARDS IS DAS. UND DAS IST NICHT GUT.'            ";
String message15 = "'TELL ME MONEY IS NOT THE KEY TO WEALTH. BECAUSE IF IT COULD STOP THE PAIN HOW THE FUCK DO YOU EXPLAIN THE BUNCH OF MILLIONAIRES THAT KILLED THEMSELVES?' - NEW YORK SOUL II             ";
String message16 = "'BUT LIFE AIN’T WHAT IT SEEMS. OH, EVERYTHING’S A MESS.' DREAM - IMAGINE DRAGONS            ";
String message17 = "'BUT WE’RE NOT TALKING WE’RE JUST PRACTICING OUR SMALL TALK' - OH, CHARLATAN ME             ";
String message18 = "'AND YOU SWEAR TO YOUR PARENTS, THAT IT WILL NEVER HAPPEN AGAIN' - GUNS FOR HANDS            ";
String message19 = "'WHO AM I TO TELL ME WHO I AM?' - NETFLIX TRIP         ";
String message20 = "'IF DEATH IS THE LAST APPOINTMENT THEN WE’RE ALL JUST SITTING IN THE WAITING ROOM' - CHURCH         ";
String message21 = "'GUESS LIFE IS LONG WHEN SOAKED IN SADNESS' -AGNES      "; 
String message22 = "'EVERY DAY IT GETS A LITTLE EASIER. BUT YOU GOTTA DO IT EVERY DAY, THAT’S THE HARD PART. BUT IT DOES GET EASIER.' - AVANT GARDENER     ";
String message23 = "'TODAY IS THE FIRST DAY OF THE REST OF YOUR DAYS. SO LIGHTEN UP, SQUIRT' - LIFT        ";
String message24 = "'I THINK THIS IS MOVING ON; AT LEAST THAT’S WHAT I TELL MYSELF' - FULL OF IT          ";
String message25 = "'I CREATED THIS WORLD TO FEEL SOME CONTROL. DESTROY IT IF I WANT' - BANDITO          ";
String message26 = "TREAT YOURSELF THE WAY YOU WOULD TREAT OTHERS        ";
String message27 = "FIND SOMEONE WHO BELIEVES IN YOU WHEN YOU DON'T.       ";
String message28 = "IF IT MATTERS TO YOU - IT'S NOT STUPID.        ";
String message29 = "YOUR TIME IS LIMITED SO DON'T WASTE IT TRYING TO LIVE SOMEONE ELSE'S LIFE        ";
String message30 = "WHEN YOU'RE SCARED BUT TO IT ANYWAY - THAT'S BRAVERY        ";
String message31 = "AND IN THIS MOMENT, I WAS PRETTY PLEASED WITH THE PERSON I WAS PRETENDING TO BE.      ";
String message32 = "I AM LEARNING EVERY DAY TO ALLOW THE SPACE BETWEEN WHERE I AM AND WHERE I WANT TO BE INSPIRE ME- NOT TERRIFY ME.     ";
String message33 = "IT DOESN'T STOP BECOMING MAGIC JUST BE YOU KNOW HOW IT WORKS      ";
String message34 = "CELEBRATE EVERY TINY VICTORY        ";
String message35 = "DON'T BE LIMITED TO ONLY THE WORDS THE AUTHOR GIVES YOU       ";
String message36 = "I AM BOTH HAPPY AND SAD AND I'M STILL TRYING TO FIGURE OUT HOW THAT COULD BE       ";
String message37 = "MAY THE SHADOW OF THE MOON FALL ON A WORLD AT PEACE          ";
String message38 = "LIVE FOR THE MOMENT. THE FUTURE CAN WAIT.          ";
String message39 = "ONCE IN A WHILE YOU MEET THESE PEOPLE THAT MAKE YOU THINK THAT, JUST MAYBE, YOU'VE DONE SOMETHING RIGHT AFTER ALL TO DESERVE THEM IN YOUR LIFE      ";
String message40 = "REDEMPTIONS NOT THAT FAR      ";
String message41 = "I'M NOT WHERE I WANT TO BE. BUT AT LEAST I'M NOT WHERE I USED TO BE.        ";
String message42 = "REMEMBER IF YOU DON'T SIN, THEN JESUS DIED FOR NOTHING         ";
String message43 = "HIGHER, FURTHER, FASTER BABY        ";
String message44 = "AND SO WE BEAT ON, BOATS AGAINST THE CURRENT, BORNE BACK CEASELESSLY INTO THE PAST.      "; 
String message45 = "IT’S AN IMPERFECT WORLD BUT IT’S THE ONLY ONE WE GOT        ";
String message46 = "PART OF THE JOUNREY IS THE END      ";
String message47 = "WE MAY NOT GET TO CHOOSE HOW WE DIE, BUT WE CAN CHOOSE HOW WE LIVE. THE UNIVERSE MAY FORGET US, BUT IT DOESN'T MATTER. BECAUSE WE ARE THE ANTS, AND WE'LL KEEP MARCHING ON.         ";
String message48 = "REMEMBER THE PAST, LIVE IN THE PRESENT, AND WRITE THE FUTURE.       ";
String message49 = "WE ACCEPT THE LOVE WE THINK WE DESERVE.         ";


struct { 
  uint8_t           addr;         // I2C address
  Adafruit_AlphaNum4 alpha4;         // 7segment object
} disp[] = {
  { 0x70, Adafruit_AlphaNum4() },  // left-hand display
  { 0x72, Adafruit_AlphaNum4() },  // middle display
  { 0x71, Adafruit_AlphaNum4() },  // right-hand display

};

void setup() {
  Serial.begin(115200);
  
  for(uint8_t i=0; i<3; i++) {       // Initialize 3 displays
    disp[i].alpha4.begin(disp[i].addr);
    disp[i].alpha4.clear();
    disp[i].alpha4.writeDisplay();
  }
}

char displaybuffer[12] = {' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void loop() {

String displayRandomMessage = messages[random(56)];

for (uint8_t i = 0; i <= displayRandomMessage.length(); i++) {
    disp[0].alpha4.writeDigitAscii(0, displayRandomMessage[i]);
    disp[0].alpha4.writeDigitAscii(1, displayRandomMessage[i+1]);
    disp[0].alpha4.writeDigitAscii(2, displayRandomMessage[i+2]);
    disp[0].alpha4.writeDigitAscii(3, displayRandomMessage[i+3]);
    disp[1].alpha4.writeDigitAscii(0, displayRandomMessage[i+4]);
    disp[1].alpha4.writeDigitAscii(1, displayRandomMessage[i+5]);
    disp[1].alpha4.writeDigitAscii(2, displayRandomMessage[i+6]);
    disp[1].alpha4.writeDigitAscii(3, displayRandomMessage[i+7]);
    disp[2].alpha4.writeDigitAscii(0, displayRandomMessage[i+8]);
    disp[2].alpha4.writeDigitAscii(1, displayRandomMessage[i+9]);
    disp[2].alpha4.writeDigitAscii(2, displayRandomMessage[i+10]);
    disp[2].alpha4.writeDigitAscii(3, displayRandomMessage[i+11]);
    disp[0].alpha4.writeDisplay();
    disp[1].alpha4.writeDisplay();
    disp[2].alpha4.writeDisplay();
    delay(180);
}