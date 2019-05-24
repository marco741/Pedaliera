#include <MIDI_Controller.h>
    
int nuovo0=0, old0=0, toggle0=0; 

int filtro0(int ingresso){
  nuovo0=ingresso/1023;
  if(nuovo0>old0){
    if(toggle0==1023)
      toggle0=0;
    else
      toggle0=1023;}
    old0=nuovo0;
    return toggle0;
}

int nuovo1=0, old1=0, toggle1=0; 

int filtro1(int ingresso){
  nuovo1=ingresso/1023;
  if(nuovo1>old1){
    if(toggle1==1023)
      toggle1=0;
    else
      toggle1=1023;}
    old1=nuovo1;
    return toggle1;
}

Analog button0(A0, 9, 1);
Analog button1(A2, 12, 1);

void setup() {
  button0.map(filtro0);
  button1.map(filtro1);
  }

void loop() {
  MIDI_Controller.refresh();
}
