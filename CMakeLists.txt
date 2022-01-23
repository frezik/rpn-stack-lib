cmake_minimum_required( VERSION 3.10 )
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

project( rpn-stack-lib VERSION 0.1 )
configure_file( src/rpn-stack-lib.h.in src/rpn-stack-lib.h )
#target_include_directories( includes PUBLIC "${PROJECT_BINARY_DIR}" )

include(CheckCSourceCompiles)
include(CheckCSourceRuns)
include(CheckFunctionExists)
include(CheckIncludeFile)
include(CheckIncludeFiles)
include(CheckLibraryExists)
include(CheckSymbolExists)
include(CheckTypeSize)

set(INCLUDES "")
macro(ck_check_include_file header var)
  check_include_files("${INCLUDES};${header}" ${var})
  if(${var})
    set(INCLUDES ${INCLUDES} ${header})
  endif(${var})
endmacro(ck_check_include_file)

ck_check_include_file("stdlib.h" HAVE_STDLIB_H)

add_subdirectory( src )
add_subdirectory( tests )

enable_testing()
add_test( NAME check COMMAND check )
