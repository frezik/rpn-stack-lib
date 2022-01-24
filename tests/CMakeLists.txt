include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)

# If pkg-config is not installed on the system, then the
# CHECK_INSTALL_DIR variable must be set to the install
# location of Check. For example, on Windows, this may
# be: C:/Program Files/check
# set(CHECK_INSTALL_DIR "C:/Program Files/check")

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})


add_executable( check check.c )
add_executable( sanity sanity.c )
add_executable( make_stack make_stack.c )
target_link_libraries( check rpn-stack-lib ${CHECK_LIBRARIES} )
target_link_libraries( sanity rpn-stack-lib ${CHECK_LIBRARIES} )
target_link_libraries( make_stack rpn-stack-lib ${CHECK_LIBRARIES} )
