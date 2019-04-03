project (WikiClient VERSION 1.0.0)

add_executable(WikiClient WikiClient.c)

set_target_properties(WikiClient PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

