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

const byte* message0 ="            A FRIEND MAY BE WAITING BEHIND A STRANGERS FACE ";
const byte* message1 ="            LIFE IS NOT ABOUT FINDING YOURSELF. LIFE IS ABOUT CREATING YOURSELF ";
const byte* message2 ="            BE THE CHANGE THAT YOU WISH TO SEE IN THE WORLD ";
const byte* message3 ="            ALL WE HAVE TO DECIDE IS WHAT TO DO WITH THE TIME THAT IS GIVEN TO US ";
const byte* message4 ="            CARPE DIEM. SEIZE THE DAY, BOYS. MAKE YOUR LIVES EXTRAORDINARY ";
const byte* message5 ="            GOOD WORDS. GOOD THOUGHTS. GOOD DEEDS ";
const byte* message6 ="            EVERYTHING HAPPENS FOR A REASON ";
const byte* message7 ="            LET NOTHING DIM THE LIGHT THAT SHINES FROM WITHIN ";
const byte* message8 ="            WHATEVER YOU ARE, BE A GOOD ONE ";
const byte* message9 ="            I AM GLAD WE GET TO BE IN THE SAME UNIVERSE TOGETHER ";
const byte* message10 ="            IT WILL HAPPEN BUT IT WILL TAKE TIME ";
const byte* message11 ="            RECOVERING FROM SUFFERING IS NOT LIKE RECOVERING FROM A DISEASE. MANY PEOPLE DON’T COME OUT HEALED; THEY COME OUT DIFFERENT ";
const byte* message12 ="            EACH MORNING WE ARE BORN AGAIN. WHAT WE DO TODAY IS WHAT MATTERS MOST ";
const byte* message13 ="            SO FAR YOU HAVE SURVIVED EVERYTHING YOU THOUGHT YOU WOULD NOT HAVE ";
const byte* message14 ="            DON'T BE SAD. BECAUSE SAD BACKWARDS IS DAS. UND DAS IST NICHT GUT ";
const byte* message15 ="            TELL ME MONEY IS NOT THE KEY TO WEALTH. BECAUSE IF IT COULD STOP THE PAIN HOW THE FUCK DO YOU EXPLAIN THE BUNCH OF MILLIONAIRES THAT KILLED THEMSELVES? ";
const byte* message16 ="            FOR MY PART I KNOW NOTHING WITH ANY CERTAINTY, BUT THE SIGHT OF THE STARS MAKES ME DREAM ";
const byte* message17 ="            BUT WE ARE NOT TALKING WE ARE JUST PRACTICING OUR SMALL TALK  ";
const byte* message18 ="            LIFE MOVES PRETTY FAST. IF YOU DON NOT STOP AND LOOK AROUND ONCE IN A WHILE, YOU COULD MISS IT ";
const byte* message19 ="            WHO AM I TO TELL ME WHO I AM?  ";
const byte* message20 ="            WHY DO WE GRIEVE FAILURES LONGER THAN WE CELEBRATE WINS? ";
const byte* message21 ="            OUR LIVES ARE NOT FULLY LIVED IF WE’RE NOT WILLING TO DIE FOR THOSE WE LOVE, FOR WHAT WE BELIEVE "; 
const byte* message22 ="            'EVERY DAY IT GETS A LITTLE EASIER. BUT YOU GOTTA DO IT EVERY DAY, THAT’S THE HARD PART. BUT IT DOES GET EASIER ";
const byte* message23 ="            TODAY IS THE FIRST DAY OF THE REST OF YOUR DAYS. SO LIGHTEN UP, SQUIRT ";
const byte* message24 ="            'I THINK THIS IS MOVING ON; AT LEAST THATS WHAT I TELL MYSELF' - FULL OF IT  ";
const byte* message25 ="            'I CREATED THIS WORLD TO FEEL SOME CONTROL. DESTROY IT IF I WANT' - BANDITO ";
const byte* message26 ="            TREAT YOURSELF THE WAY YOU WOULD TREAT OTHERS ";
const byte* message27 ="            FIND SOMEONE WHO BELIEVES IN YOU WHEN YOU DON'T ";
const byte* message28 ="            IF IT MATTERS TO YOU - ITS NOT STUPID  ";
const byte* message29 ="            YOUR TIME IS LIMITED SO DON'T WASTE IT TRYING TO LIVE SOMEONE ELSE'S LIFE  ";
const byte* message30 ="            WHEN YOU ARE SCARED BUT TO IT ANYWAY - THAT'S BRAVERY ";
const byte* message31 ="            AND IN THIS MOMENT, I WAS PRETTY PLEASED WITH THE PERSON I WAS PRETENDING TO BE ";
const byte* message32 ="            I AM LEARNING EVERY DAY TO ALLOW THE SPACE BETWEEN WHERE I AM AND WHERE I WANT TO BE INSPIRE ME- NOT TERRIFY ME ";
const byte* message33 ="            IT DOES NOT STOP BECOMING MAGIC JUST BE YOU KNOW HOW IT WORKS ";
const byte* message34 ="            CELEBRATE EVERY TINY VICTORY ";
const byte* message35 ="            DON'T BE LIMITED TO ONLY THE WORDS THE AUTHOR GIVES YOU  ";
const byte* message36 ="            I AM BOTH HAPPY AND SAD AND I'M STILL TRYING TO FIGURE OUT HOW THAT COULD BE ";
const byte* message37 ="            MAY THE SHADOW OF THE MOON FALL ON A WORLD AT PEACE ";
const byte* message38 ="            LIVE FOR THE MOMENT. THE FUTURE CAN WAIT ";
const byte* message39 ="            ONCE IN A WHILE YOU MEET THESE PEOPLE THAT MAKE YOU THINK THAT, JUST MAYBE, YOU'VE DONE SOMETHING RIGHT AFTER ALL TO DESERVE THEM IN YOUR LIFE  ";
const byte* message40 ="            REDEMPTIONS NOT THAT FAR ";
const byte* message41 ="            I AM NOT WHERE I WANT TO BE. BUT AT LEAST I'M NOT WHERE I USED TO BE ";
const char* message42 ="            REMEMBER IF YOU DON'T SIN, THEN JESUS DIED FOR NOTHING  ";
const byte* message43 ="            HIGHER, FURTHER, FASTER, BABY ";
const byte* message44 ="            AND SO WE BEAT ON, BOATS AGAINST THE CURRENT, BORNE BACK CEASELESSLY INTO THE PAST "; 
const byte* message45 ="            IT IS AN IMPERFECT WORLD BUT IT IS THE ONLY ONE WE GOT ";
const byte* message46 ="            PART OF THE JOUNREY IS THE END ";
const byte* message47 ="            WE MAY NOT GET TO CHOOSE HOW WE DIE, BUT WE CAN CHOOSE HOW WE LIVE. THE UNIVERSE MAY FORGET US, BUT IT DOESN'T MATTER. BECAUSE WE ARE THE ANTS, AND WE'LL KEEP MARCHING ON ";
const byte* message48 ="            WE REMEMBER THE PAST, LIVE IN THE PRESENT, AND WRITE THE FUTURE ";
const byte* message49 ="            WE ACCEPT THE LOVE WE THINK WE DESERVE ";
const byte* message50 ="            THE BEGINNING OF PURPOSE IS FOUND IN CREATING SOMETHING THAT ONLY YOU UNDERSTAND ";
const byte* message51 ="            THIS IS FOR RACHEL, YOU BIG FAT, WHITE NASTY, SMELLING FAT BITCH, WHY YOU TOOK ME OFF THE MOTHERFUKING SCHEDULE, WITH YOUR TRIFLING DIRTY WHITE RACIST ASS BIG FAT BITCH, AND MALUMA BODY ASS BITCH ";
const byte* message52 ="            START SOMEWHERE ";
const byte* message53 ="            WE ALL DIE. THE GOAL IS NOT TO LIVE FOREVER. THE GOAL IS TO CREATE SOMETHING THAT WILL ";
const byte* message54 ="            I AM BETTER THAN I WAS. I WILL BE BETTER THAN I AM";
const byte* message55 ="            THE ONES WHO WALK IN THE DARKNESS WILL EVENTUALLY SEE THE LIGHT ";
const byte* message56 ="            LIFE HAPPENS WHILE YOU ARE TOO BUSY MAKING OTHER PLANS ";
const byte* message57 ="            IF YOURE NERVOUS, IT MEANS YOU GIVE A DAMN ";
const byte* messages[] = {message0, message1, message2, message3, message4, message5, message6, message7, message8, message9, message10, message11, message12, message13, message14, message15, message16 ,message17, message18, message19, message20, message21, message22, message23, message24, message25, message26, message27, message28, message29, message30, message31, message32, message33, message34, message35, message36, message37, message38, message39, message40, message41, message42, message43, message44, message45, message46, message47, message48, message49, message50, message51 ,message52, message53, message53, message54, message55, message56, message57};

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
