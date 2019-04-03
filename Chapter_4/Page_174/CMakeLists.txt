project (Totaller VERSION 1.0.0)

add_executable(Totaller Totaller.c)
set_target_properties(Totaller PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})