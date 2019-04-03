project (Island VERSION 1.0.0)

add_executable(Island Island.c)
set_target_properties(Island PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})