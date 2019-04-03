project (Categorize VERSION 1.0.0)

add_executable(Categorize Categorize.c)
set_target_properties(Categorize PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

set( DEP_FILE
   "${CMAKE_CURRENT_SOURCE_DIR}/spooky.csv"
)

# do the copying
foreach( file_i ${DEP_FILE})
    add_custom_command(
    TARGET Categorize
    POST_BUILD
    COMMAND ${CMAKE_COMMAND}
    ARGS -E copy ${file_i} "${CMAKE_CURRENT_BINARY_DIR}")
endforeach()
