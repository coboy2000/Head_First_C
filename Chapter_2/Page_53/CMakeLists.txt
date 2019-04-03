project (FortuneCookie VERSION 1.0.0)

add_executable(FortuneCookie FortuneCookie.c)
set_target_properties(FortuneCookie PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})