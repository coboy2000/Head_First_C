project (Fish VERSION 1.0.0)

add_executable(Fish Fish.c)
set_target_properties(Fish PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})