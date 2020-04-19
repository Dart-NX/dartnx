
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <switch.h>
#include <vm\dart.h>

int main(int argc, char** argv) {

    consoleInit(NULL);
    printf("DartNX VM v0.0.1\n");
    printf("VM started successfully\n");

    while (appletMainLoop())
    {
        hidScanInput();
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
        if (kDown & KEY_PLUS)
            break;
        consoleUpdate(NULL);
    }

    consoleExit(NULL);

    return 0;
}
