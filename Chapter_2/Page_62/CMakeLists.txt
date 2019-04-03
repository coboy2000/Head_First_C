project (Sharpen VERSION 1.0.0)

add_executable(Sharpen Sharpen.c)
set_target_properties(Sharpen PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})