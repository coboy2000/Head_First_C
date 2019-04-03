project (Spies VERSION 1.0.0)

add_executable(Spies Spies.c CMemleak.c)
SET(CMAKE_C_FLA)
set_target_properties(Spies PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
