


set(LIB "configs")
add_library(${LIB})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    core
)


target_sources(
    ${LIB} PRIVATE
    Atom_Labels.cpp
    Config.cpp
)
