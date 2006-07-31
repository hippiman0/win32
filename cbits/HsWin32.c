// Out-of-line versions of all the inline functions from HsWin32.h
#define INLINE  /* nothing */
#include "HsWin32.h"

void UnmapViewOfFileFinaliser(void * p) {
    UnmapViewOfFile(p);
}

void CloseHandleFinaliser(HANDLE h) {
    CloseHandle(h);
}
