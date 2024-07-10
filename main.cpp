#include "mbed.h"

Serial pc(USBTX,USBRX); //tx, rx
DigitalOut myled(LED2);
DigitalIn Blue_button(PC_13);
 
int main() {
    
    pc.baud(9600);
    
    while(1) {
        if (Blue_button==1)  //The button is normally high
        {
        myled = 1;
          pc.printf("LED_ON\n");
        wait(0.1);
       }
       else
       { 
         myled =0;
         pc.printf("LED_OFF\n");
         wait(0.5);
        }
       
    }
}

    
  

