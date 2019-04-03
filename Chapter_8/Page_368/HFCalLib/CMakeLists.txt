project (HFCallibStatic VERSION 1.0.0)

add_library(HFCallibStatic 
    STATIC  # default is STATIC
    HFCAl.h 
    HFCal.c)

target_include_directories(HFCallibStatic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

set_target_properties(HFCallibStatic PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

#add_custom_command(TARGET HFCallibStatic POST_BUILD
#    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:HFCallibStatic> ../Elliptical/${targetfile}
#)
