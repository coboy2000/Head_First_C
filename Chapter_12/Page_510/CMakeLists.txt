project (Beer VERSION 1.0.0)

set(GCC_COVERAGE_COMPILE_FLAGS "-lpthread")

add_executable(Beer Beer.c)

set_target_properties(Beer PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

