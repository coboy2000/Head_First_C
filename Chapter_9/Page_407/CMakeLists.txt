project (MyExecProgram VERSION 1.0.0)

add_executable(MyExecProgram MyExecProgram.c)

set_target_properties(MyExecProgram PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

