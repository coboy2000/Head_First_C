project (FortuneCookie2 VERSION 1.0.0)

add_executable(FortuneCookie2 FortuneCookie2.c)
set_target_properties(FortuneCookie2 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})