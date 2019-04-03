project (ReverseString VERSION 1.0.0)

add_executable(ReverseString ReverseString.c)
set_target_properties(ReverseString PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
