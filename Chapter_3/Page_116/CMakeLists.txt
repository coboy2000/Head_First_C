project (Geo2Json2 VERSION 1.0.0)

#message(STATUS "CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(Geo2Json2 Geo2Json.c)
set_target_properties(Geo2Json2 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

set( DEP_FILE
   "${CMAKE_CURRENT_SOURCE_DIR}/gpsdata.csv"
)

# do the copying
foreach( file_i ${DEP_FILE})
    add_custom_command(
    TARGET Geo2Json2
    POST_BUILD
    COMMAND ${CMAKE_COMMAND}
    ARGS -E copy ${file_i} "${CMAKE_CURRENT_BINARY_DIR}")
endforeach()

