project (Food VERSION 1.0.0)

add_executable(Food Food.c)
set_target_properties(Food PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})