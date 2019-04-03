project (HFCallib VERSION 1.0.0)

add_library(HFCallib 
    SHARED  # default is STATIC
    HFCAl.h 
    HFCal.c)

target_include_directories(HFCallib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

set_target_properties(HFCallib PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_custom_command(TARGET HFCallib POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:HFCallib> ../Elliptical/${targetfile}
)

set(LibName "${targetfile}" PARENT_SCOPE)