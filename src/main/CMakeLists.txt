
set(EXE "eamfit++.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)

target_link_libraries(
    ${EXE} PRIVATE 
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
)

target_sources(
    ${EXE} PRIVATE
    main.cpp
)






#target_link_libraries(${EXE} PRIVATE configs)


