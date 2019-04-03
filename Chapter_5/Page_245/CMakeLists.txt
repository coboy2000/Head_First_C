project (SafeCracker VERSION 1.0.0)

add_executable(SafeCracker SafeCracker.c)
set_target_properties(SafeCracker PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})