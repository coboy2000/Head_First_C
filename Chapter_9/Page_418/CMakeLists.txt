project (NewsHound VERSION 1.0.0)

add_executable(NewsHound NewsHound.c)
set_target_properties(NewsHound PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

set( DEP_FILE
   "${CMAKE_CURRENT_SOURCE_DIR}/rssgossip.py"
)

# do the copying
foreach( file_i ${DEP_FILE})
    add_custom_command(
    TARGET NewsHound
    POST_BUILD
    COMMAND ${CMAKE_COMMAND}
    ARGS -E copy ${file_i} "${CMAKE_CURRENT_BINARY_DIR}")
endforeach()