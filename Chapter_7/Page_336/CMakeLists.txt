project (SendDearJohn VERSION 1.0.0)

add_executable(SendDearJohn SendDearJohn.c)
set_target_properties(SendDearJohn PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
