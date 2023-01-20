#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "testmemmove.c"
#include "teststrlcpy.c"
#include "teststrlcat.c"
#include "testtoupper.c"
#include "teststrchr.c"
#include "teststrncmp.c"



int    main(void)
{
    testmemmove();
    teststrlcpy();
    teststrlcat();
    testtoupper();
    teststrchr();
    teststrncmp();



    return (0);
}
