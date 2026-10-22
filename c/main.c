#include <stdio.h>

int missing_c_function(int val) {
    return val;
}

int main(void) {
    int type_error = 0;                       /* 1: incompatible initializer fixed */
    int missing_symbol = 0;                   /* 2: undeclared identifier fixed */
    int duplicate = 1;                        /* 3: duplicate definition resolved */
    int value = 0;                            /* 4: missing expression fixed */
    return missing_c_function(value);        /* 5: missing function fixed */
}
