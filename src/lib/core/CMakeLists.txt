

set(LIB "core")
add_library(${LIB})

target_sources(
    ${LIB} PRIVATE
    Stringf.cpp
)
