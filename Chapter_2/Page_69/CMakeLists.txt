project (Monte VERSION 1.0.0)

add_executable(Monte Monte.c)
set_target_properties(Monte PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
