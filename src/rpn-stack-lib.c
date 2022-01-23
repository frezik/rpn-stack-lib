#include <stdio.h>
#include "rpn-stack-lib.h"


void hello( void )
{
    printf( "Hello, world\n" );
    printf( 
        "Version: %d.%d\n"
        ,RPN_STACK_LIB_VERSION_MAJOR
        ,RPN_STACK_LIB_VERSION_MINOR
    );
}


/* Modeline for ViM {{{
 * vim:set ts=4:
 * vim600:fdm=marker fdl=0 fdc=3:
 * }}} */


