// Animation data for Emma's Gemma + LED matrix backpack necklace.

#define REPS 3 // Number of times to repeat the animation loop (1-255)

const uint8_t PROGMEM anim[] = {

  // Animation bitmaps.  Each frame of animation MUST contain
  // 8 lines of graphics data (there is no error checking for
  // length).  Each line should be prefixed with the letter 'B',
  // followed by exactly 8 binary digits (0 or 1), no more,
  // no less (again, no error checking).  '0' represents an
  // 'off' pixel, '1' an 'on' pixel.  End line with a comma.
  B11111111, // This is the first frame for "EMMA"
  B10000000, // If you squint you can kind of see the
  B10000000, // image in the 0's and 1's.
  B11110000,
  B11110000,
  B10000000,
  B10000000,
  B11111111,
  // The 9th line (required) is the time to display this frame,
  // in 1/100ths of a second (e.g. 100 = 1 sec, 25 = 1/4 sec,
  // etc.).  Range is 0 (no delay) to 255 (2.55 seconds).  If
  // longer delays are needed, make duplicate frames.
  25, // 0.25 seconds

  B10000001, // This is the second frame for "EMMA"
  B11000011,
  B10100101,
  B10011001,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  25, // 0.25 second delay

  // Frames 3 for "EMMA" is a duplicate of frame 2.
  // Rather than list them verbosely, the lines are condensed here
  B10000001, B11000011, B10100101, B10011001, B10000001, B10000001, B10000001, B10000001, 25,

  B00011000, // This is the forth frame for "EMMA"
  B00100100,
  B01000010,
  B10000001,
  B11111111,
  B10000001,
  B10000001,
  B10000001,
  25, // 0.25 second delay

  B00000000, // First frame for heart
  B00000000,
  B01100110,
  B01111110,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  25, // 0.25 second delay

  B00000000, // Second frame for heart
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  25, // 0.25 second delay

  // Frames 3 & 4 for heart are duplicates of frames 1 & 2
  B00000000, B00000000, B01100110, B01111110, B01111110, B00111100, B00011000, B00000000, 25,
  B00000000, B01100110, B11111111, B11111111, B01111110, B00111100, B00011000, B00000000, 25,

  B00111100, // First frame for smile emoji
  B01000010,
  B10100101,
  B10100101,
  B11000011,
  B10111101,
  B01000010,
  B00111100,
  25,

  B00111100, // Second frame for smile emoji
  B01000010,
  B10000001,
  B10100101,
  B11000011,
  B10111101,
  B01000010,
  B00111100,
  25,

  // Frames 3 & 4 for smile emoji are duplicates of frames 1 & 2
  B00111100, B01000010, B10100101, B10100101, B11000011, B10111101, B01000010, B00111100, 25,
  B00111100, B01000010, B10000001, B10100101, B11000011, B10111101, B01000010, B00111100, 25,

  B00010000, // First frame for poo emoji
  B00011000,
  B00100100,
  B01000010,
  B10100101,
  B10000001,
  B10011001,
  B01111110,
  12, // ~1/8 second delay

  B00001000, // Second frame for poo emoji
  B00011000,
  B00100100,
  B01000010,
  B10100101,
  B10100101,
  B10001001,
  B01111110,
  12, // ~1/8 second delay

  B00010000, // Third frame for poo emoji
  B00011000,
  B00100100,
  B01000010,
  B10100101,
  B10000001,
  B10011101,
  B01111110,
  12, // ~1/8 second delay

  B00001000, // Forth frame for poo emoji
  B00011000,
  B00100100,
  B01000010,
  B10100101,
  B11000011,
  B10111101,
  B01111110,
  12, // ~1/8 second delay

  // Frames 5-8 are duplicates of 4-1, lines merged for brevity
  B00001000, B00011000, B00100100, B01000010, B10100101, B11000011, B10111101, B01111110, 12,
  B00010000, B00011000, B00100100, B01000010, B10100101, B10000001, B10011101, B01111110, 12,
  B00001000, B00011000, B00100100, B01000010, B10100101, B10100101, B10001001, B01111110, 12,
  B00010000, B00011000, B00100100, B01000010, B10100101, B10000001, B10011001, B01111110, 12,
};
