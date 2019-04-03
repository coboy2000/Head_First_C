project (NestingStruct VERSION 1.0.0)

add_executable(NestingStruct NestingStruct.c)
set_target_properties(NestingStruct PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})