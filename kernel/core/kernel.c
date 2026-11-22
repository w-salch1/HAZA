#include <stdio.h>

void kernel_init(void);

int main(void)
{
    printf("============================\n");
    printf("          HAZA UI\n");
    printf("============================\n");

    printf("[INFO] Starting HAZA UI...\n");

    kernel_init();

    printf("[INFO] System is running!\n");

    return 0;
}
