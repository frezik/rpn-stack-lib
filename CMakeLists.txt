cmake_minimum_required( VERSION 3.10 )
project( rpn-stack-lib VERSION 0.1 )
configure_file( src/rpn-stack-lib.h.in src/rpn-stack-lib.h )
#target_include_directories( includes PUBLIC "${PROJECT_BINARY_DIR}" )

add_executable( hello src/hello.c )
