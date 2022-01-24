#include <stdio.h>
#include "rpn-stack-lib.h"


struct rpn_stack_node* rpn_create_new_stack( int data )
{
    struct rpn_stack_node* node = (struct rpn_stack_node*)
        malloc( sizeof( struct rpn_stack_node
    ) );
    node->data = data;
    node->next = NULL;
    return node;
}


/* Modeline for ViM {{{
 * vim:set ts=4:
 * vim600:fdm=marker fdl=0 fdc=3:
 * }}} */


