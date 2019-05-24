#include <MIDI_Controller.h>
    
int nuovo=0, old=0, toggle=0; 

int filtro(int ingresso){
  nuovo=ingresso/1023;
  if(nuovo>old){
    if(toggle==1023)
      toggle=0;
    else
      toggle=1023;}
    old=nuovo;
    return toggle;
}

Analog button0(A0, 9, 1);

void setup() {
  button0.map(filtro);
  }

void loop() {
  MIDI_Controller.refresh();
}
