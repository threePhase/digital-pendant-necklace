// Animation data for Katelyn's Gemma + LED matrix backpack necklace.

#define REPS 3 // Number of times to repeat the animation loop (1-255)

const uint8_t PROGMEM anim[] = {

  // Animation bitmaps.  Each frame of animation MUST contain
  // 8 lines of graphics data (there is no error checking for
  // length).  Each line should be prefixed with the letter 'B',
  // followed by exactly 8 binary digits (0 or 1), no more,
  // no less (again, no error checking).  '0' represents an
  // 'off' pixel, '1' an 'on' pixel.  End line with a comma.
  B10000010, // This is the first frame for "KATELYN<3"
  B10000100, // If you squint you can kind of see the
  B10001000, // image in the 0's and 1's.
  B10010000,
  B11110000,
  B10001000,
  B10000100,
  B10000010,
  // The 9th line (required) is the time to display this frame,
  // in 1/100ths of a second (e.g. 100 = 1 sec, 25 = 1/4 sec,
  // etc.).  Range is 0 (no delay) to 255 (2.55 seconds).  If
  // longer delays are needed, make duplicate frames.
  25, // 0.25 seconds

  B00011000, // This is the second frame for "KATELYN<3"
  B00100100,
  B01000010,
  B10000001,
  B11111111,
  B10000001,
  B10000001,
  B10000001,
  25, // 0.25 second delay

  B11111111, // This is the third frame for "KATELYN<3"
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  25, // 0.25 second delay

  B11111111, // This is the forth frame for "KATELYN<3"
  B10000000,
  B10000000,
  B11110000,
  B11110000,
  B10000000,
  B10000000,
  B11111111,
  25, // 0.25 second delay

  B10000000, // This is the fifth frame for "KATELYN<3"
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B11111111,
  25, // 0.25 second delay

  B10000001, // This is the sixth frame for "KATELYN<3"
  B01000010,
  B00100100,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  25, // 0.25 second delay

  B10000001, // This is the seventh frame for "KATELYN<3"
  B11000001,
  B10100001,
  B10010001,
  B10001001,
  B10000101,
  B10000011,
  B10000001,
  25, // 0.25 second delay

  B00000000, // This is the eighth frame for "KATELYN<3"
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  25, // 0.25 second delay

  B00111100, // First frame for glasses emoji
  B01000010,
  B11111111,
  B11100111,
  B11000011,
  B10111101,
  B01000010,
  B00111100,
  25,

  B00111100, // Second frame for glasses emoji
  B01000010,
  B11111111,
  B11100111,
  B11000011,
  B10111101,
  B01011010,
  B00111100,
  25,

  // Frames 3 & 4 for smile emoji are duplicates of frames 1 & 2
  B00111100, B01000010, B11111111, B11100111, B11000011, B10111101, B01000010, B00111100, 25,
  B00111100, B01000010, B11111111, B11100111, B11000011, B10111101, B01011010, B00111100, 25,

  B00000000, // First frame for floating heart emoji
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  12, // ~1/8 second delay

  B00000000, // Second frame for floating heart emoji
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B11111111,
  12, // ~1/8 second delay

  B00000000, // Third frame for floating heart emoji
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  12, // ~1/8 second delay

  B00000000, // Forth frame for floating heart emoji
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  12, // ~1/8 second delay

  B01100110, // Fifth frame for floating heart emoji
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  12, // ~1/8 second delay

  B11111111, // Sixth frame for floating heart emoji
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  12, // ~1/8 second delay

  B00111100, // Seventh frame for floating heart emoji
  B00011000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  12, // ~1/8 second delay

  B00000000, // Eighth frame for floating heart emoji
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  12, // ~1/8 second delay
};
