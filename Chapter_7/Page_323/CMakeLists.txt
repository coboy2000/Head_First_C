project (Find VERSION 1.0.0)

add_executable(Find Find.c)
set_target_properties(Find PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
