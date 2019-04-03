project (ikkpServerFork VERSION 1.0.0)

add_executable(ikkpServerFork ikkpServer.c)

set_target_properties(ikkpServerFork PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

