#include <stdint.h>

#define STACK_TOP 0x20000800

void nmi_handler(void);
void hardfault_handler(void);
int main(void);

// Define the vector table
uint32_t* myvectors[4] 
__attribute__ ((section("vectors")))= {
  (uint32_t*)STACK_TOP,        // stack pointer
  (uint32_t*)main,             // code entry point
  (uint32_t*)nmi_handler,      // NMI handler
  (uint32_t*)hardfault_handler // hard fault handler
};

int main(void) {
  int i=0;

  while(1) {
    i++;
  }
}

void nmi_handler(void) {
  return ;
}

void hardfault_handler(void) {
  return ;
}
