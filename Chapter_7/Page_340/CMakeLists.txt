project (DearJohn VERSION 1.0.0)

add_executable(DearJohn DearJohn.c)
set_target_properties(DearJohn PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
