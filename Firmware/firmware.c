#include "pico/stdlib.h"
#include "pico/stdio.h"
#include "pico_ice/ice.h"

int
main(void)
{
    stdio_init_all();
    ice_init_defaults();

    for (;;) {
        // Application code here

        ice_usb_task();
    }

    return 0;
}
