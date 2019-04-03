project (Geo2Json2 VERSION 1.0.0)

#message(STATUS "CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(Geo2Json3 Geo2Json.c)
set_target_properties(Geo2Json3 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

#copy gpsdata.csv to geo2Json3 directory
add_custom_command(TARGET Geo2Json3 POST_BUILD 
     COMMAND ${CMAKE_COMMAND}
     -E copy ${CMAKE_CURRENT_SOURCE_DIR}/gpsdata.csv 
     ${CMAKE_CURRENT_BINARY_DIR}/gpsdata.csv
   )

