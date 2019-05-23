#include <MIDI_Controller.h>
    
int nuovo=0, old=0, toggle=0; 

int filtro(int ingresso){
  return ingresso/127;
}

Analog button0(A0, 9, 1);

void setup() {
  button0.map(filtro);
  }

void loop() {
  MIDI_Controller.refresh();
}
