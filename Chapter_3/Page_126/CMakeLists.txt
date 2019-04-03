project (TopSecret VERSION 1.0.0)

add_executable(TopSecret TopSecret.c)
set_target_properties(TopSecret PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

# create a list of files to copy
#set( DEP_FILE
#   "${CMAKE_CURRENT_SOURCE_DIR}/Message_1.txt"
#   "${CMAKE_CURRENT_SOURCE_DIR}/Message_2.txt"
#)

set( DEP_FILE
   "${CMAKE_CURRENT_SOURCE_DIR}/Secret.txt"
)

# do the copying
foreach( file_i ${DEP_FILE})
    add_custom_command(
    TARGET TopSecret
    POST_BUILD
    COMMAND ${CMAKE_COMMAND}
    ARGS -E copy ${file_i} "${CMAKE_CURRENT_BINARY_DIR}")
endforeach()