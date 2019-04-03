project (TestIPConfig VERSION 1.0.0)

add_executable(TestIPConfig IPConfig.c)

set_target_properties(TestIPConfig PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

