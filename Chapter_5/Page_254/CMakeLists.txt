project (BadUnion VERSION 1.0.0)

add_executable(BadUnion BadUnion.c)
set_target_properties(BadUnion PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})