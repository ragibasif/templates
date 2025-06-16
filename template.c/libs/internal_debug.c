#define F_MEMORY_DEBUG /* turns on the memory debugging system */
#include "internal_debug.h"
#include "forge.h"

void forge_run(void) {
    f_debug_memory_init(NULL, NULL, NULL);
    f_debug_mem_print(0);
    f_debug_mem_reset();
}
