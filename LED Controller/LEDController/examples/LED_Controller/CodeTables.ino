#define TOTAL_MORSE_CODES 36

const char* StandardMorseCodeTable[TOTAL_MORSE_CODES] = {
    // alphabet
    ".-",   // A: 0
    "-...", // B
    "-.-.", // C
    "-..",  // D
    ".",    // E
    "..-.", // F
    "--.",  // G
    "....", // H
    "..",   // I
    ".---", // J
    "-.-",  // K
    ".-..", // L
    "--",   // M
    "-.",   // N
    "---",  // O
    ".--.", // P
    "--.-", // Q
    ".-.",  // R
    "...",  // S
    "-",    // T
    "..-",  // U
    "...-", // V
    ".--",  // W
    "-..-", // X
    "-.--", // Y
    "--..", // Z: 25
    // numbers
    "-----",// 0: 26
    ".----",// 1
    "..---",// 2
    "...--",// 3
    "....-",// 4
    ".....",// 5
    "-....",// 6
    "--...",// 7
    "---..",// 8
    "----.",// 9: 35
};

int TapCodeTable[26][2] = {
//  A      B      C      D      E    
  {1,1}, {1,2}, {1,3}, {1,4}, {1,5},
//  F      G      H      I      J     K/C
  {2,1}, {2,2}, {2,3}, {2,4}, {2,5}, {1,3},
//  L      M      N      O      P
  {3,1}, {3,2}, {3,3}, {3,4}, {3,5},
//  Q      R      S      T      U
  {4,1}, {4,2}, {4,3}, {4,4}, {4,5},
//  V      W      X      Y      Z
  {5,1}, {5,2}, {5,3}, {5,4}, {5,5},
};