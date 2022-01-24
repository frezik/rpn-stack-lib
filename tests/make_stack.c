#include <stdlib.h>
#include <check.h>
#include "rpn-stack-lib.h"


START_TEST( make_stack )
{
    struct rpn_stack_node* root = rpn_create_new_stack( 0 );
    ck_assert_msg( root, "Got a stack" );
}
END_TEST


Suite * make_suite( void )
{
    Suite *s;
    TCase *tc_core;

    s = suite_create( "RPN-Stack" );

    /* Core test case */
    tc_core = tcase_create( "Core" );

    tcase_add_test( tc_core, make_stack );
    suite_add_tcase( s, tc_core );

    return s;
}

int main(int argc, char **argv)
{
    int num_failed;
    Suite *s;
    SRunner *sr;

    s = make_suite();
    sr = srunner_create( s );
    srunner_run_all( sr, CK_NORMAL );
    num_failed = srunner_ntests_failed( sr );
    srunner_free( sr );
    return (num_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}


/* Modeline for ViM {{{
 * vim:set ts=4:
 * vim600:fdm=marker fdl=0 fdc=3:
 * }}} */


