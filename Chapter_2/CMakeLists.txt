project (Head_First_C-Chapter_2 VERSION 1.0.0)

# SET_PROPERTY(GLOBAL PROPERTY ALLOW_DUPLICATE_CUSTOM_TARGETS 1)

add_subdirectory(Page_45)

add_subdirectory(Page_50)

add_subdirectory(Page_53)

add_subdirectory(Page_54)

add_subdirectory(Page_57)

add_subdirectory(Page_62)

add_subdirectory(Page_66)

add_subdirectory(Page_67)

add_subdirectory(Page_69)

add_subdirectory(Page_72)

add_executable(ArrayAddress ArrayAddress.c)
set_target_properties(ArrayAddress PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(Test Test.c)
set_target_properties(Test PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(CodeForTestDrivePage13 CodeForTestDrivePage13.c)
set_target_properties(CodeForTestDrivePage13 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(Comma Comma.c)
set_target_properties(Comma PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(Food2 Food.c)
set_target_properties(Food2 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

#add_executable(Fred Fred.c)
#set_target_properties(Fred PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})