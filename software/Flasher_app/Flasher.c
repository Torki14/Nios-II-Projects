#include <stdio.h>
#include <unistd.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"

void delay(int n) {
    volatile int i;
    for(i = 0; i < n; i++);
}

int main() {
    printf("Flasher Started! Watch Pin 89...\n");
    while(1) {
        IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE, 1); // Turn ON
        delay(500000);
        IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE, 0); // Turn OFF
        delay(500000);
    }
    return 0;
}
