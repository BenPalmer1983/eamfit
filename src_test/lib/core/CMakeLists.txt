


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


#




