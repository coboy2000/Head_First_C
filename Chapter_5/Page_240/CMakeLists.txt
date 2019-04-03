project (Turtle VERSION 1.0.0)

add_executable(Turtle Turtle.c)
set_target_properties(Turtle PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})