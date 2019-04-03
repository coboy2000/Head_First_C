project (ikkpServer VERSION 1.0.0)

add_executable(ikkpServer ikkpServer.c)

set_target_properties(ikkpServer PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

