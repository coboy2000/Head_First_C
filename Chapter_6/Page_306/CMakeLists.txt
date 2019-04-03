project (SpiesFix VERSION 1.0.0)

add_executable(SpiesFix Spies.c)
set_target_properties(SpiesFix PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
