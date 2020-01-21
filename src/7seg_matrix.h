/*
 * Seven-Segment display matrix of bits to write numbers, characters and letters to shift-register/parallel displays
 * Also includes bits required for special functions/examples
 * Used by Segment.h and Segment.cpp
*/
const int Segment::_numMatrix[62][8] PROGMEM {
     //segments
     //g,f,e,d,c,b,a,dp
      {0,1,1,1,1,1,1,0}, //ZERO
      {0,0,0,0,1,1,0,0}, //ONE
      {1,0,1,1,0,1,1,0}, //TWO
      {1,0,0,1,1,1,1,0}, //THREE
      {1,1,0,0,1,1,0,0}, //FOUR
      {1,1,0,1,1,0,1,0}, //FIVE
      {1,1,1,1,1,0,1,0}, //SIX
      {0,0,0,0,1,1,1,0}, //SEVEN
      {1,1,1,1,1,1,1,0}, //EIGHT
      {1,1,0,1,1,1,1,0}, //NINE
      {1,1,1,0,1,1,1,0}, //LETTER A
      {1,1,1,1,1,0,0,0}, //LETTER B
      {0,1,1,1,0,0,1,0}, //LETTER C
      {1,0,1,1,1,1,0,0}, //LETTER D
      {1,1,1,1,0,0,1,0}, //LETTER E
      {1,1,1,0,0,0,1,0}, //LETTER F
      {0,1,1,1,1,0,1,0}, //LETTER G
      {1,1,1,0,1,0,0,0}, //LETTER H
      {0,1,1,0,0,0,0,0}, //LETTER I
      {0,0,1,1,1,1,0,0}, //LETTER J
      {1,1,1,0,1,0,1,0}, //LETTER K
      {0,1,1,1,0,0,0,0}, //LETTER L
      {0,0,1,0,1,0,1,0}, //LETTER M
      {0,1,1,0,1,1,1,0}, //LETTER N
      {0,1,1,1,1,1,1,0}, //LETTER O
      {1,1,1,0,0,1,1,0}, //LETTER P
      {1,1,0,0,1,1,1,0}, //LETTER Q
      {0,1,1,0,0,1,1,0}, //LETTER R
      {1,1,0,1,1,0,1,0}, //LETTER S
      {1,1,1,1,0,0,0,0}, //LETTER T
      {0,1,1,1,1,1,0,0}, //LETTER U
      {0,1,0,1,1,1,0,0}, //LETTER V
      {0,1,0,1,0,1,0,0}, //LETTER W
      {1,1,1,0,1,1,0,0}, //LETTER X
      {1,1,0,1,1,1,0,0}, //LETTER Y
      {1,0,0,1,0,1,1,0}, //LETTER Z
      {0,0,0,0,0,0,0,0}, //BLANK
      {0,1,0,0,0,1,0,0}, //CHARACTER "
      {0,1,1,0,1,1,0,0}, //CHARACTER #
      {1,1,0,1,0,0,1,0}, //CHARACTER $
      {0,1,0,1,1,0,1,0}, //CHARACTER %
      {1,1,1,1,0,1,1,0}, //CHARACTER &
      {0,0,0,0,0,1,0,0}, //CHARACTER ' `
      {0,1,1,1,0,0,1,0}, //CHARACTER ( [ {
      {0,0,0,1,1,1,1,0}, //CHARACTER ) ] }
      {1,1,0,0,0,1,1,0}, //CHARACTER *
      {1,1,1,0,0,0,0,0}, //CHARACTER +
      {0,0,0,1,1,0,0,0}, //CHARACTER ,
      {1,0,0,0,0,0,0,0}, //CHARACTER - ~
      {1,0,0,0,0,1,0,0}, //CHARACTER /
      {1,0,0,1,0,0,0,0}, //CHARACTER :
      {1,0,0,1,1,0,0,0}, //CHARACTER ;
      {1,1,0,0,0,0,1,0}, //CHARACTER <
      {1,0,0,0,0,0,1,0}, //CHARACTER =
      {1,0,0,0,0,1,1,0}, //CHARACTER >
      {1,0,1,0,0,1,1,0}, //CHARACTER ?
      {1,0,1,1,1,1,1,0}, //CHARACTER @
      {1,1,0,0,0,0,0,0}, //CHARACTER (back slash)
      {0,1,0,0,0,1,1,0}, //CHARACTER ^
      {0,0,0,1,0,0,0,0}, //CHARACTER _
      {0,0,0,0,0,1,0,1}, //CHARACTER !
      {0,0,0,0,0,0,0,1}  //CHARACTER .
};