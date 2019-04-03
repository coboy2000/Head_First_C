project (Island2 VERSION 1.0.0)

add_executable(Island2 Island.c)
set_target_properties(Island2 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

set( DEP_FILE
   "${CMAKE_CURRENT_SOURCE_DIR}/trip1.txt"
)

# do the copying
foreach( file_i ${DEP_FILE})
    add_custom_command(
    TARGET Island2
    POST_BUILD
    COMMAND ${CMAKE_COMMAND}
    ARGS -E copy ${file_i} "${CMAKE_CURRENT_BINARY_DIR}")
endforeach()