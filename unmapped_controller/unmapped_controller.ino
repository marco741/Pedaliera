#include <MIDI_Controller.h>

Analog button0(A0, 9, 1);

void setup() {
  }

void loop() {
  MIDI_Controller.refresh();
}
