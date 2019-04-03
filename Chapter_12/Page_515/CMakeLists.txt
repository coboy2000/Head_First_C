project (ParamTest VERSION 1.0.0)

set(GCC_COVERAGE_COMPILE_FLAGS "-lpthread")

add_executable(ParamTest ParamTest.c)

set_target_properties(ParamTest PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

