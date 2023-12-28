


set(EXE "configs.dev.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
)


target_sources(
    ${EXE} PRIVATE
    configs.dev.cpp
)


#




