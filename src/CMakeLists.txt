set(LIB_SOURCES
  rpn-stack-lib.c
)

set(MAIN_SOURCES
  main.c
)

set(HEADERS 
  ${CONFIG_HEADER}
  rpn-stack-lib.h
)

add_library(rpn-stack-lib STATIC ${LIB_SOURCES} ${HEADERS})

add_executable(main ${HEADERS} ${MAIN_SOURCES})
target_link_libraries(main rpn-stack-lib)

install(TARGETS rpn-stack-lib
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/rpn-stack-lib.h DESTINATION include)
