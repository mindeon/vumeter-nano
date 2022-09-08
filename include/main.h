
// (Heavily) adapted from https://github.com/G6EJD/ESP32-8266-Audio-Spectrum-Display/blob/master/ESP32_Spectrum_Display_02.ino
// Adjusted to allow brightness changes on press+hold, Auto-cycle for 3 button presses within 2 seconds
// Edited to add Neomatrix support for easier compatibility with different layouts.

#include <Arduino.h>
#include <FastLED_NeoMatrix.h>
#include <arduinoFFT.h>
#include <EasyButton.h>

void whitePeak(int band);
void outrunPeak(int band);
void changeMode();
void brightnessButton();
void startAutoMode();
void brightnessOff();
void rainbowBars(int band, int barHeight);
void purpleBars(int band, int barHeight);
void centerBars(int band, int barHeight);
void changingBars(int band, int barHeight);
void waterfall(int band);
