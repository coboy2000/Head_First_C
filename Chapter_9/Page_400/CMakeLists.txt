project (GuardLog VERSION 1.0.0)

add_executable(GuardLog GuardLog.c)

set_target_properties(GuardLog PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

