project (Greetings VERSION 1.0.0)

add_executable(Greetings Greetings.c)

set_target_properties(Greetings PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

