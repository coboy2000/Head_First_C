project (MonteFixed VERSION 1.0.0)

add_executable(MonteFixed Monte.c)
set_target_properties(MonteFixed PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
