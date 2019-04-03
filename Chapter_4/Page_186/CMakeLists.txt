project (MessageHider VERSION 1.0.0)

add_executable(MessageHider Encrypt.c MessageHider.c)
set_target_properties(MessageHider PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})