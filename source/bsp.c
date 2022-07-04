#include<stdlib.h>

void system_init()
{
    tick_init();
    lcd_init();
    spi_init();
}
