project (AdviseServer VERSION 1.0.0)

add_executable(AdviseServer AdviseServer.c)

set_target_properties(AdviseServer PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

