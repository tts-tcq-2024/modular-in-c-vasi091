#ifndef COLOR_UTILITY_H
#define COLOR_UTILITY_H

#include "color_definitions.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_UTILITY_H
