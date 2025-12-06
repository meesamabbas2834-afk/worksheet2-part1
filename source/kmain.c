#include "../drivers/frame_buffer.h"

int kmain(void) {
    char init_text[] = "OS Kernel: Worksheet 2 Loaded Successfully";
    int text_len = sizeof(init_text) - 1;
    
    fb_write(init_text, text_len);
    return 0;
}
