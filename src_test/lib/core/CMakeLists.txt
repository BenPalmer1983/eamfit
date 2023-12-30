


#######################################################
#                 Development tests
#######################################################

# core.dev.x
#######################################################

set(EXE "core.dev.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
)


target_sources(
    ${EXE} PRIVATE
    core.dev.cpp
)




#######################################################
#                    Unit tests
#######################################################


# core.dev.x
#######################################################

set(EXE "core.Stringf.units.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libtester.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
)


target_sources(
    ${EXE} PRIVATE
    core.Stringf.units.cpp
)





