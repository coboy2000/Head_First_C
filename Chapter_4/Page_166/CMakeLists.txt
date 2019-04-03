project (BusTables VERSION 1.0.0)

add_executable(BusTables BusTables.c)
set_target_properties(BusTables PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})