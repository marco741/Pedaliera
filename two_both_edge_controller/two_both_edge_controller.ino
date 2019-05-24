#include <MIDI_Controller.h>
    
int nuovo=0, old=0, toggle=0; 

int filtro(int ingresso){
  return ingresso/127;
}

Analog button0(A0, 9, 1);
Analog button1(A2, 12, 1);

void setup() {
  button0.map(filtro);
  button1.map(filtro);
  }

void loop() {
  MIDI_Controller.refresh();
}
