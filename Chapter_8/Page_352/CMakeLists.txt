project (TestCode VERSION 1.0.0)

add_executable(TestCode TestCode.c Encrypt.c Checksum.c)
set_target_properties(TestCode PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
