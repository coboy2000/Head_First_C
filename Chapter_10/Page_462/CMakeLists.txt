project (MathMaster VERSION 1.0.0)

add_executable(MathMaster MathMaster.c)

set_target_properties(MathMaster PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

