project (Argument VERSION 1.0.0)

set(GCC_COVERAGE_COMPILE_FLAGS "-lpthread")

add_executable(Argument Argument.c)

set_target_properties(Argument PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

