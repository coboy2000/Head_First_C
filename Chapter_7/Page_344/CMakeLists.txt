project (VariadicFunc VERSION 1.0.0)

add_executable(VariadicFunc VariadicFunc.c)
set_target_properties(VariadicFunc PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
