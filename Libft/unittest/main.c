#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "testmemmove.c"
#include "teststrlcpy.c"
#include "teststrlcat.c"
#include "testtoupper.c"
#include "teststrchr.c"
#include "teststrncmp.c"
#include "testatoi.c"



int    main(void)
{
    testmemmove();
    teststrlcpy();
    teststrlcat();
    testtoupper();
    teststrchr();
    teststrncmp();
    testatoi();



    return (0);
}
